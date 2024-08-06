https://www.geeksforgeeks.org/problems/left-rotate-matrix-k-times2351/1

Solution 1-:
1)using k times loop and in every times we shift all and before it we store the
  1st column.

Code-: Time->O(N*M*K)
void helper(vector<vector<int>>&mat)
{
        int n=mat.size();
        int m=mat[0].size();
        
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(mat[i][0]);
        }
        
        
        for(int j=1;j<m;j++)
        {
            for(int i=0;i<n;i++)
            {
                 mat[i][j-1]=mat[i][j];
            }
        }
        
        for(int i=0;i<n;i++)
        {
            mat[i][m-1]=v[i];
        }
        
}

vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
          int n=mat.size();
          
          for(int i=0;i<k;i++)
          {
              helper(mat);
          }
          return mat;
}



Solution 2-:
Steps-:
1)similar as we do in array.
2)reverse(0,k-1)
  reverse(k,m-1)
  reverse(0,m-1)

Code-: Time->O(N*M) Space->O(1)
void reverse(vector<vector<int>>&mat,int low,int high)
{
        int n=mat.size();
        while(low<high)
        {
            for(int i=0;i<n;i++)
            {
                swap(mat[i][low],mat[i][high]);
            }
            low++;
            high--;
        }
}

vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) 
{
        int m=mat[0].size();
        k=k%m;
        reverse(mat,0,k-1);
        reverse(mat,k,m-1);
        reverse(mat,0,m-1);
        return mat;
}