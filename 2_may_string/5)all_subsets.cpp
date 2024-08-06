void helper(vector<int>A,int index,int n,vector<int>v1,vector<vector<int>>&v)
    {
        if(index==n)
        {
            v.push_back(v1);
            return ;
        }
        // not included
        helper(A,index+1,n,v1,v);
        
        //included
        v1.push_back(A[index]);
        helper(A,index+1,n,v1,v);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int>>v;
        vector<int>v1;
        int index=0;
        int n=A.size();
        helper(A,index,n,v1,v);
        sort(v.begin(),v.end());
        return v;
    }



Java -:
public static void helper(ArrayList<Integer> A, int index, int n, ArrayList<Integer> v1, ArrayList<ArrayList<Integer>> ans) 
    {
        if (index == n) {
            ans.add(new ArrayList<>(v1));
            return;
        }

        // not included
        helper(A, index + 1, n, v1, ans);

        // included
        v1.add(A.get(index));
        helper(A, index + 1, n, v1, ans);
        v1.remove(v1.size() - 1); // Backtrack: remove the last element to explore other branches
    }
    public static ArrayList<ArrayList<Integer>> subsets(ArrayList<Integer> A) 
    {
        ArrayList<ArrayList<Integer>> ans =new ArrayList<ArrayList<Integer>>(); 
        ArrayList<Integer> v1 = new ArrayList<>();
        int index = 0;
        int n =A.size();
        helper(A, index, n, v1, ans);
        Collections.sort(ans, (a, b) -> {
            for (int i = 0; i < Math.min(a.size(), b.size()); i++) {
                int cmp = a.get(i).compareTo(b.get(i));
                if (cmp != 0)
                    return cmp;
            }
            return Integer.compare(a.size(), b.size());
        });
        return ans;
        
    }