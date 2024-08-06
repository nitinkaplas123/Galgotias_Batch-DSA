Code-:
int modifyMEX(int n, vector<int> &arr) 
{
        vector<int> count(n, 0);
        for (int e : arr) {
            if (e < n) {
                count[e]++;
            }
        }
        if (count[0] == 0) 
        return -1;
        
        int ans = n;
        for (int i = 0; i < n; i++) {
            if (count[i] == 0) {
                break; 
            }
            ans = min(ans, count[i]);
        }
        return ans;
}