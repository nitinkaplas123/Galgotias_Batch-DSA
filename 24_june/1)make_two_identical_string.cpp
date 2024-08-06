https://www.geeksforgeeks.org/problems/minimum-cost-to-make-two-strings-identical1107/1?utm_source=youtube&utm_medium=courseteam_practice_desc&utm_campaign=problem_of_the_day


























Code-:
int helper(int memo[1001][1001],string &x,string &y,int n,int m)
{
        if(n==0 || m==0) return 0;
        if(memo[n][m]!=-1)
        return memo[n][m];
        
        int res;
        if(x[n-1]==y[m-1])
        res= 1+helper(memo,x,y,n-1,m-1);
        else
        res= max(helper(memo,x,y,n-1,m), helper(memo,x,y,n,m-1));
        return memo[n][m]=res;
}

int findMinCost(string x, string y, int costX, int costY) {
        int n=x.length();
        int m=y.length();
        int memo[1001][1001];
        memset(memo,-1,sizeof(memo));
        int lcs=helper(memo,x,y,n,m);
        
        int x1=n-lcs;
        int x2=m-lcs;
        return x1*costX + x2*costY;
    }