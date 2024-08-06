https://www.geeksforgeeks.org/problems/trail-of-ones3242/1


Code-:
int mod=1e9+7;
    int numberOfConsecutiveOnes(int n) {
        if(n==2) return 1;
        int a=0;
        int b=1;
        int c;
        int ans=1;
        for(int i=3;i<=n;i++)
        {
            c=(a+b)%mod;
            ans=((ans*2)%mod + c)%mod;
            a=b;
            b=c;
        }
        return ans;
    }