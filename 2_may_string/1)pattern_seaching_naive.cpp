https://www.geeksforgeeks.org/problems/pattern-searching5231/1


Time ->O(N-M+1)*O(M)
public static boolean searchPattern(String str, String pat) {
       int n=str.length();
       int m=pat.length();
       
       for(int i=0;i<=n-m;i++)
       {
           int j;
           for(j=0;j<m;j++)
           {
               if(str.charAt(i+j)!=pat.charAt(j))
               break;
           }
           if(j==m)
           return true;
       }
       return false;
}