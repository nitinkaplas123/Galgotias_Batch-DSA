Solution 1-:
Steps-:
1)Three cases-:
  1. if root of both ==NULL means its equal so return 1
  2. if root of any equal to null means one root is null and another is not null =>means not equal so return 0
  3. return 1 =>root1->val==root2->val and go to left_side and go to right_side


Code-:
bool isIdentical(Node *root1, Node *root2)
{
      if(root1==NULL && root2==NULL) return true;
	    if(root1==NULL || root2==NULL) return false;
	    return (root1->data==root2->data 
	            && isIdentical(root1->left,root2->left)
	            && isIdentical(root1->right,root2->right));
}


Java-:
	boolean isIdentical(Node root1, Node root2)
	{
	   if(root1==null && root2==null) return true;
	   if(root1==null || root2==null) return false;
	   
	   return (root1.data==root2.data && isIdentical(root1.left,root2.left)
	           && isIdentical(root1.right,root2.right));
	}