 
 Code-:
 int maxGoodSubarrays(int n, vector<int> &arr) {
        // code here
        if(n<2)
        return 0;
        
        int end_point=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>arr[n-1])
            {
                end_point=i;
                break;
            }
        }
        if(end_point==-1)
        return 0;
        int ans=1;
        int maxx=arr[0];
        for(int i=1;i<end_point;i++)
        {
            if(maxx>arr[i])
            {
                ans++;
                maxx=arr[i+1];
            }
            else
            maxx=arr[i];
        }
        return ans;
    }