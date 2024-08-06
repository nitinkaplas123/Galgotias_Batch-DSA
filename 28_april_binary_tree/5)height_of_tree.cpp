Solution 1-:

Code-: Time->O(n)
int maxDepth(TreeNode* root) 
{
        if(root==NULL)
        return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
}


Java -:
int height(Node node) 
{
       if(node==null) return 0;
       int left=height(node.left);
       int right=height(node.right);
       return 1+Math.max(left,right);
}