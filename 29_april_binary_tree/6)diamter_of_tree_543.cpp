Solution 1-:
Steps-:
1)Using heights of max(root->left+root->right),max(fun(root->left),fun(root->right));


Code-: Time->O(n2) Space ->O(1)  there is only space using for recursion
int height(TreeNode* root)
    {
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int left=height(root->left);
        int right=height(root->right);

        return max(left+right,max(diameterOfBinaryTree(root->left),
                                  diameterOfBinaryTree(root->right)));
    }




Solution 2-:
Steps-:
1)here we make res reference variable at last we have to return res
2)from bottom we have to return height and in res we store =>res=(left+right)

Code-: Time->O(n)
int helper(Node* root,int &ans)
{
        if(root==NULL)
        return 0;
        int left=helper(root->left,ans);
        int right=helper(root->right,ans);
        ans=max(ans,left+right+1);
        return 1+max(left,right);
}
int diameter(Node* root) {
        int ans=0;
        helper(root,ans);
        return ans;
}

Java -:
int helper(Node root,int []ans)
{
        if(root==null)
        return 0;
        int left=helper(root.left,ans);
        int right=helper(root.right,ans);
        ans[0]=Math.max(ans[0],left+right+1);
        return 1+Math.max(left,right);
}
int diameter(Node root) {
        int []ans={0};
        helper(root,ans);
        return (ans[0]);
}