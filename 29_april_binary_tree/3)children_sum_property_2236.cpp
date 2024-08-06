Solution 1-:
Steps-:
1)If root is null || root is leaf node then return true
2)Now root->val==root->left->val+root->right->val and helper(left_side) and helper(right_side)


Code-:
int isSumProperty(Node *root)
{
       if(root==NULL) return 1;
       if(root->left==NULL && root->right==NULL) return 1;
       
       int sum=0;
       if(root->left!=NULL)
       sum+=root->left->data;
       if(root->right!=NULL)
       sum+=root->right->data;
       
       return (sum==root->data && isSumProperty(root->left) && 
                                 isSumProperty(root->right));
}


Java -:
public static int isSumProperty(Node root)
{
       if(root==null) return 1;
       if(root.left==null && root.right==null) return 1;
       
       int sum=0;
       if(root.left!=null)
       sum+=root.left.data;
       if(root.right!=null)
       sum+=root.right.data;
       
       if(sum==root.data && isSumProperty(root.left)!=0 && 
                                 isSumProperty(root.right)!=0)
       return 1;
       else
       return 0;
}