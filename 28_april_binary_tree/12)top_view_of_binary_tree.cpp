C++ Code-:
vector<int> topView(Node *root)
    {
       vector<int>v;
       if(root==NULL) return v;
       
       queue<pair<Node*,int>>q;
       q.push({root,0});
       
       map<int,int>m;
        
       while(q.empty()==false)
       {
           Node* curr=q.front().first;
           int h=q.front().second;
           q.pop();
           
           if(m[h]==0)
           m[h]=curr->data;
           
           if(curr->left)
           q.push({curr->left,h-1});
           
           if(curr->right)
           q.push({curr->right,h+1});
       }
       
       for(auto x:m)
       {
           v.push_back(x.second);
       }
       return v;
    }

Java -:
class qObj
{
    Node node;
    int level;
    qObj(Node n,int l)
    {
        node=n;
        level=l;
    }
}

class Solution
{
    public static ArrayList<Integer> topView(Node root)
    {
        ArrayList<Integer> ans = new ArrayList<>();
        
        Queue<qObj> q=new LinkedList<qObj>();
        q.add(new qObj(root,1));
        
        Map<Integer,Integer> map=new TreeMap<Integer,Integer>();
       
        while(!q.isEmpty())
        {
            qObj popped=q.poll();
            if(!map.containsKey(popped.level))
            map.put(popped.level,popped.node.data);
            
            if(popped.node.left!=null)
            q.add(new qObj(popped.node.left,popped.level-1));
            
            if(popped.node.right!=null)
            q.add(new qObj(popped.node.right,popped.level+1));
        }
        
        for(Map.Entry<Integer,Integer> e:map.entrySet())
        {
           ans.add(e.getValue());
        }
        return ans;
    }
}

Solution 2-:
Steps-:
Using recursion

Code-:
void helper(Node* root,int dist,int level,map<int,pair<int,Node*>>&m)
{
        if(root==NULL) return ;
        
        if(m[dist].second==NULL || m[dist].first>level)
        m[dist]={level,root};
        
        helper(root->left,dist-1,level+1,m);
        helper(root->right,dist+1,level+1,m);
}

vector<int> topView(Node *root)
{
       vector<int>v;
       if(root==NULL) return v;
       
      
       map<int,pair<int,Node*>>m;
       helper(root,0,0,m);
       
       for(auto x:m)
       {
           v.push_back(x.second.second->data);
       }
       return v;
}

