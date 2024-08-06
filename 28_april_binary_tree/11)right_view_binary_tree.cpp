Solution 1-:
Steps-:
1)Using level order traversal
2)add when i==size of level of tree  (i==n)

Code-:
void helper(TreeNode* root,vector<int>&v)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false)
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                if(i==size-1)
                v.push_back(curr->val);
                if(curr->left)
                q.push(curr->left);
                if(curr->right)
                q.push(curr->right);
            }
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        if(root==NULL)
        return v;
        helper(root,v);
        return v;
    }




Solution 2-:
Steps-:
1)Using same approach as we do in left view just till bit changes  
2)in right view we go to right side first then go to left side but in left view we go to left side then go to 
  right side.
Code-:
void helper(TreeNode* root,vector<int>&v,int level,int &max_level)
    {
       if(root==NULL)
       return ;
       if(level>max_level)
       {
          v.push_back(root->val);
          max_level=level;
       }

       helper(root->right,v,level+1,max_level);
       helper(root->left,v,level+1,max_level);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        if(root==NULL)
        return v;
        int max_level=0;
        int level=1;
        helper(root,v,level,max_level);
        return v;
    }



Java -:
class Solution{
    int max_level=0;
    //Function to return list containing elements of right view of binary tree.
    void helper(Node root,int level,ArrayList<Integer>list)
    {
        if(root==null) return ;
        if(level>max_level)
        {
            list.add(root.data);
            max_level=level;
        }
        helper(root.right,level+1,list);
        helper(root.left,level+1,list);
    }
    ArrayList<Integer> rightView(Node node) {
        ArrayList<Integer>list=new ArrayList<>();
        helper(node,1,list);
        return list;
    }
}