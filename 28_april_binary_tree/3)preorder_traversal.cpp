Preorder->  root,left,right

Solution 1-:
Using Recursive-:

Code-: Time->O(N)
void helper(TreeNode* root,vector<int>&v)
{
        if(root==NULL) return ;
        v.push_back(root->val);
        helper(root->left,v);
        helper(root->right,v);
}
    
vector<int> preorderTraversal(TreeNode* root) 
{
        vector<int>v;
        helper(root,v);
        return v;
}



Java-:
static void helper(Node root,ArrayList<Integer>list)
{
        if(root==null) return ;
        list.add(root.data);
        helper(root.left,list);
        helper(root.right,list);
}

static ArrayList<Integer> preorder(Node root)
{
        ArrayList<Integer>list=new ArrayList<>();
        helper(root,list);
        return list;
}