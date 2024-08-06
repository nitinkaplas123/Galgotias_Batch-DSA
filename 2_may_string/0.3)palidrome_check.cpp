
bool helper(string &S,int start,int end)
{
	    if(start>=end)
	    return true;
	    
	    return (S[start]==S[end] and helper(S,start+1,end-1));
}
	int isPalindrome(string S)
	{
	   int start=0;
	   int end=S.length()-1;
	   return helper(S,start,end);
	}