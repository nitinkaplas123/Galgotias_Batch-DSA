Question link-:
https://practice.geeksforgeeks.org/problems/k-distance-from-root/1

Solution 1-:

Code-:
void helper(Node* root,int k,vector<int>&v,int dist)
{
    if(root==NULL)
    return ;
    
    if(dist==k)
    {
        v.push_back(root->data);
        return ;
    }
    helper(root->left,k,v,dist+1);
    helper(root->right,k,v,dist+1);
}

vector<int> Kdistance(struct Node *root, int k)
{
    vector<int>v;
    int dist=0;
    helper(root,k,v,dist);
    return v;
}


Java-:
void helper(Node root,ArrayList<Integer>list,int k,int level)
{
         if(root==null) return;
         
         if(level==k)
         {
             list.add(root.data);
             return ;
         }
         helper(root.left,list,k,level+1);
         helper(root.right,list,k,level+1);
}

ArrayList<Integer> Kdistance(Node root, int k)
{
          ArrayList<Integer>list=new ArrayList<>();
          int level=0;
          helper(root,list,k,level);
          return list;
}