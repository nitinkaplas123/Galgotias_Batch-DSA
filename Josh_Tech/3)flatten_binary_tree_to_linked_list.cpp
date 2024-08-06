https://www.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

Code-:
C++
void helper(Node* root,Node* &prev)
    {
        if(root==NULL) return ;
        
        helper(root->right,prev);
        helper(root->left,prev);
        root->right=prev;
        root->left=NULL;
        prev=root;
        return ;
    }
    void flatten(Node *root)
    {
        Node* prev=NULL;
        helper(root,prev);
    }

Java -:
Code-:
static void helper(Node root,Node[] prev)
    {
        if(root==null)
        return ;
        
        helper(root.right,prev);
        helper(root.left,prev);
        
        root.right=prev[0];
        root.left=null;
        prev[0]=root;
        return ;
    }
    public static void flatten(Node root)
    {
        Node []prev=new Node[1];
        prev[0]=null;
        
        helper(root,prev);
    }
