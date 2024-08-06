Solution 1-:
Steps-:
1)Run two loops where we make all possible substring and check if its palidrome or not.
2)And according to this we are making two varibles (ans integer where we are storing integer value)
  and similarily we are updating our string acc to ans.


Code-:
bool isPalidrome(string &str)
    {
        int low=0;
        int high=str.length()-1;
        while(low<high)
        {
            if(str[low]!=str[high]) return false;
            low++;
            high--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.length();
        int ans=0;
        string str_ans="";
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                string str=s.substr(i,j-i+1);
                if(isPalidrome(str))
                {
                    if(ans<j-i+1)
                    {
                        ans=j-i+1;
                        str_ans=str;
                    }
                }
            }
        }
        return str_ans;
    }


Sol-:
string longestPalindrome(string s) {
        int n=s.length();
        int dp[n][n];

        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        
        int len=1;
        int start=0;
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                   if(j-i==1 || dp[i+1][j-1]==1)
                   {
                       dp[i][j]=1;
                       if(len<j-i+1)
                       {
                           start=i;
                           len=j-i+1;
                       }
                   }
                   else
                   dp[i][j]=0;
                }
                else
                dp[i][j]=0;
            }
        }
        return s.substr(start,len);
    }