Solution 1-:
Steps-:
1)Using queue and map.

C++
vector<int> topView(Node *root)
    {
       vector<int>v;
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

class Pair{
    int hd;
    Node node;
    
    Pair( Node node, int hd) {
        this.hd = hd;
        this.node = node;
    }
}


class Solution
{

    static ArrayList<Integer> topView(Node root)
    {
       ArrayList<Integer> ans = new ArrayList<>();
       if(root == null){
           return ans;
       }
       Map<Integer, Integer> mpp = new TreeMap<>();
       Queue<Pair> q = new LinkedList<Pair>();
       
       q.add(new Pair ( root, 0));
       
       while (!q.isEmpty()){
           Pair it = q.remove();
           int hd = it.hd;
           Node temp = it.node;
           
           if(mpp.get(hd) == null){
               mpp.put(hd, temp.data);
           }
           if(temp.left != null){
               q.add(new Pair (temp.left, hd-1));
           }
           if(temp.right != null){
               q.add(new Pair (temp.right, hd+1));
           }
       }
       for (Map.Entry<Integer, Integer> entry: mpp.entrySet()){
           ans.add(entry.getValue());
       }
       return ans;
        
    }
}


Solution 2-:
Steps-:
1)using recursion.


C++
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
       map<int,pair<int,Node*>>m;
       helper(root,0,0,m);
       
       for(auto x:m)
       {
           v.push_back(x.second.second->data);
       }
       return v;
}

Java-:

class Solution
{
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    static class Pair 
    {
     int level;
     Node node;

     Pair(int level, Node node) {
        this.level = level;
        this.node = node;
     }
}
    
    static void helper(Node root, int dist, int level, TreeMap<Integer, Pair> m)
    {
        if (root == null) return;
        if (!m.containsKey(dist) || m.get(dist).level > level) {
            m.put(dist, new Pair(level, root));
        }

        helper(root.left, dist - 1, level + 1, m);
        helper(root.right, dist + 1, level + 1, m);
    }
    
    static ArrayList<Integer> topView(Node root)
    {
        ArrayList<Integer> v = new ArrayList<>();
        if(root == null) return v;

        TreeMap<Integer, Pair> m = new TreeMap<>();
        helper(root, 0, 0, m);

        for (Pair x : m.values()) {
            v.add(x.node.data);
        }
        return v;
    }
}