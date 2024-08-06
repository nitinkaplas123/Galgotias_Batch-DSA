Code-:
int mod=1e9+7;
    int geekCount(string s) {
        int g=0;
        int e1=0;
        int e2=0;
        int ans=0;
        for(char ch:s)
        {
            if(ch=='g')
            g++;
            else if(ch=='e')
            {
                e2=(e2+e1)%mod;
                e1=(e1+g)%mod;
            }
            else if(ch=='k')
            ans=(ans+e2)%mod;
            else
            continue;
        }
        return ans;
    }