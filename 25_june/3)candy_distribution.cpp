https://practice.geeksforgeeks.org/problems-preview/candy-distribution-and-geeks-queries/1

int helper(int val,vector<int>&v)
    {
        int low=1;
        int high=v.size()-1;
        int index=v.size();
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(v[mid]>=val)
            {
                index=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return v.size()-index;        
    }
    vector<int> queriesAndCandyDistribution(int n, int m, int q, vector<vector<int>>& a,
                                            vector<int>& query) 
    {

       vector<int>pre_sum(n+2,0);
       for(int i=0;i<m;i++)
       {
           int low=a[i][0];
           int high=a[i][1]+1;
           int val=a[i][2];
           pre_sum[low]+=val;
           pre_sum[high]-=val;
       }
       pre_sum.pop_back();
       
       for(int i=1;i<=n;i++)
       {
           pre_sum[i]+=pre_sum[i-1];
       }
       
       sort(pre_sum.begin(),pre_sum.end());
       
       vector<int>ans(q,0);
       for(int i=0;i<q;i++)
       {
           ans[i]=helper(query[i],pre_sum);
       }
       return ans;
    }