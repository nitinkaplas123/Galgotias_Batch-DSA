Solution 1-:
Steps-:
1)if root is null || root is leaf node that is called balanced binary tree.
2)Find height at every step left and right of root node.
3)if(abs(left-right)<=1 and check left side and check right side)


Code-: Time->O(n2)
int height(TreeNode* root)
    {
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return 1;
        if(root->left==NULL and root->right==NULL) return 1;
        int left=height(root->left);
        int right=height(root->right);
        return (abs(left-right)<=1 and isBalanced(root->left) and isBalanced(root->right));
    }


Solution 2-:
Steps-:
1)Going from bottom to top because we have to return height also 
2)Intially we make ans=1 if abs(left-right)>1  ans=0;

Code-:
int helper(Node * root,int &res)
{
        if(root==NULL) return 0;
        int left=helper(root->left,res);
        int right=helper(root->right,res);
        if(abs(left-right)>1) res=0;
        return 1+max(left,right);
}
bool isBalanced(Node *root)
{
       int res=1;
       helper(root,res);
       return res;
}


Java -: here we are using array for pass by value.
int helper(Node root,int []res)
{
        if(root==null) return 0;
        int left=helper(root.left,res);
        int right=helper(root.right,res);
        if(Math.abs(left-right)>1) res[0]=0;
        return 1+Math.max(left,right);
}

boolean isBalanced(Node root)
{
       int []res={1};
       helper(root,res);
       return (res[0]==1);
}