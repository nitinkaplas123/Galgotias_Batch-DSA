int mod=1e9+7;
	long long int helper(int memo[101][10001],vector<int>arr,int sum,int n)
    {
        if(n==0)
        {
            if(sum==0) return 1;
            else
            return 0;
        }
        
        if(memo[n][sum]!=-1) return memo[n][sum];
        
        int res;
        if(sum>=arr[n-1])
        res= helper(memo,arr,sum-arr[n-1],n-1)%mod + helper(memo,arr,sum,n-1)%mod;
        else
        res= helper(memo,arr,sum,n-1)%mod;
        return memo[n][sum]=res%mod;
    }
    
	long long int perfectSum(vector<int>arr, int n, int sum)
	{
        int memo[101][10001];
        memset(memo,-1,sizeof(memo));
        return helper(memo,arr,sum,n);
	}
    long long findTargetSumWays(int n, vector<int>& A, int target) {
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
        }
        int diff=(sum+target)/2;
        if((sum+target)%2!=0) return 0;
        else
        return perfectSum(A,n,diff);
    }