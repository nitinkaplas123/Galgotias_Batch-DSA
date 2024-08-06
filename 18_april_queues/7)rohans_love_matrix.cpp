https://www.geeksforgeeks.org/problems/rohans-love-for-matrix4723/1





























Sol-:
C++
int mod=1e9+7;
int firstElement(int n) {
       if(n==1)
       return 1;
       
       int a=0;
       int b=1;
       int c;
       for(int i=2;i<=n;i++)
       {
           c=(a+b)%mod;
           a=b;
           b=c;
       }
       return c;
}



In Java -:
static int firstElement(int n) {
       int mod=1000000007;
       if(n==1)
       return 1;
       
       int a=0;
       int b=1;
       int c=0;
       for(int i=2;i<=n;i++)
       {
           c=(a+b)%mod;
           a=b;
           b=c;
       }
       return c;
}