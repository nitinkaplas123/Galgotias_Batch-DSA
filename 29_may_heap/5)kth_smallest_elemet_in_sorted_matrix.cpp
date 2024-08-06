https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/description/
struct comp
{
    bool operator()(int a,int b)
    {
        return a>b;
    }
};
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
          int n=matrix.size();
          priority_queue<int,vector<int>,comp>pq;
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           pq.push(matrix[i][j]);
       }
   }
   
   int ans;
   while(k--)
   {
       ans=pq.top();
       pq.pop();
   }
   return ans;
    }