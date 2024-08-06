https://practice.geeksforgeeks.org/problems-preview/gsb-interview/1

Code-:
 bool isPossible(int mid,int n,int m,int k,vector<int>&arrival)
    {
        int count=1;
        int curr=1;
        int first=arrival[0];
        
        for(int i=1;i<n;i++)
        {
            if(curr==k || arrival[i]-first>mid)
            {
                count++;
                curr=0;
                first=arrival[i];
            }
            curr++;
        }
        return (count<=m);
    }
    int minimizeWaitingTime(int n, int m, int k, vector<int> &arrival) {
        sort(arrival.begin(),arrival.end());
        
        int low=0;
        int high=arrival[n-1]-arrival[0];
        
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(isPossible(mid,n,m,k,arrival))
            {
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }