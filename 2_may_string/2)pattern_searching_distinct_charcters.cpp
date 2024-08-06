Str=[ABCABCD]
Pat=[ABCD]

2) i=j+i
Str=[ABCABCDABCD]
Pat=[ABCD]

3)where we are using i=i++;
str=[ABCD]
pat=[BCD]

Code-: Time ->O(N)
#include <iostream>
using namespace std;
void helper(string str,string pat)
{
    int n=str.length();
    int m=pat.length();
    for(int i=0;i<=n-m;)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(str[i+j]!=pat[j])
            {
                break;
            }
           
        }
        if(j==m) cout<<i<<" ";
        
        if(j==0)
        i++;
        else
        i=i+j;
    }
}