https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1

Solution 1-:
Steps-:
1)Here we have to sort the array 
2)we have to find the min diff bw maxi-mini
3)using two pointer i=0 j=m-1 
4)now find the min diff

Code-: Time->O(nlogn)  Space ->O(1)

long long findMinDiff(vector<long long> a, long long n, long long m){
       sort(a.begin(),a.end());
       long long low=0;
       long long high=m-1;
       long long ans=INT_MAX;
       
       while(high<n)
       {
           long long curr_min=a[high]-a[low];
           ans=min(ans,curr_min);
           low++;
           high++;
       }
       return ans;
}   