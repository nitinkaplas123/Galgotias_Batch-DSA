https://practice.geeksforgeeks.org/problems-preview/bridge-on-bits-i/1

Code-:
int makeBridgeOne(int n, vector<long long> &arr) {
       int ans=INT_MAX;
       for(int i=0;i<64;i++)
       {
           int count=0;
           for(int j=0;j<n;j++)
           {
               if(((1L<<i)&arr[j])==0)
               count++;
           }
           ans=min(ans,count);
       }
       return ans;
    }