https://www.geeksforgeeks.org/problems/power-of-numbers-1587115620/1

Code-:
int mod=1e9+7;
long long power(int N,int R)
{
      if(R==0) return 1;
      long long temp=power(N,R/2);
      temp=(temp%mod) * (temp%mod);
      
      if(R%2==0)
      return temp%mod;
      else
      return ((temp%mod)*N)%mod;
}