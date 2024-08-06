Solution 1-:

Idea-:
Level order traversal means we have to print all nodes from level wise from left to right.
For that we use queue data struture

Code-:
vector<int> levelOrder(Node* root)
{
       vector<int>v;
       queue<Node*>q;
       q.push(root);
       
       while(q.empty()==false)
       {
           Node* curr=q.front();
           q.pop();
           
           v.push_back(curr->data);
           
           if(curr->left!=NULL)
           q.push(curr->left);
           if(curr->right!=NULL)
           q.push(curr->right);
       }
       return v;
}

Java-:

static ArrayList <Integer> levelOrder(Node root) 
{
       ArrayList<Integer>list=new ArrayList<>();
       Queue<Node>q=new LinkedList<>();
       q.add(root);
       
       while(q.isEmpty()==false)
       {
           Node curr=q.remove();
           list.add(curr.data);
           
           if(curr.left!=null)
           q.add(curr.left);
           
           if(curr.right!=null)
           q.add(curr.right);
       }
       return list;
}