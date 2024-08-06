https://www.geeksforgeeks.org/problems/longest-subsequence-such-that-difference-between-adjacents-is-one4724/1


Solution 1-:
Steps-:
1) Same question as LIS (Longest Increasing subsequence)


Code-:
int longestSubseq(int n, vector<int> &a)
    {
        int temp[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=1;
        }
        
        int ans=1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(a[i]-a[j])==1)
                {
                 temp[j]=max(temp[j],1+temp[i]);
                 ans=max(ans,temp[j]);
                }
            }
        }
        return ans;
    }