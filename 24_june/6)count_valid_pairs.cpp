Code-:
int MOD=1e9+7;
    int CountPairs(int N, int k, vector<int> &arr) 
    {
        unordered_map<int,vector<int>>m;

        for (int i=0;i<N;i++) 
        {
            m[arr[i]].push_back(i+1);
        }

        int ans = 0;
        for (auto x:m)
        {
            vector<int>& t = x.second;
            map<int, int> mp;

            for (auto y:t)
            {
                int j=(y%k);
                int i=(k-j)%k;

                if (mp.find(i)!=mp.end()) {
                   ans = (ans + mp[i]) % MOD;
                }
                mp[j]++;
            }
        }
        return ans;
    }