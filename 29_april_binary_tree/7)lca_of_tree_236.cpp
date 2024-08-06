TestCase-:
3,5,1,6,2,0,8,n,n,7,4

Solution 1-:


Code-:
Node lca(Node root, int n1,int n2)
{
	   if(root==null) return null;
	   if(root.data==n1 || root.data==n2) return root;
	   Node left=lca(root.left,n1,n2);
	   Node right=lca(root.right,n1,n2);
	   
	   if(left==null && right==null) return null;
	   if(left!=null && right!=null) return root;
	   return (left!=null)?left:right;
}