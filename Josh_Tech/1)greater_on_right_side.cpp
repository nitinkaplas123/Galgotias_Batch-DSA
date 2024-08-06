https://www.geeksforgeeks.org/problems/greater-on-right-side4305/1

Solution 1-:
void nextGreatest(int arr[], int n) 
{
	    int maxx=arr[n-1];
	    arr[n-1]=-1;
	    for(int i=n-2;i>=0;i--)
	    {
	        int val=arr[i];
	        arr[i]=maxx;
	        maxx=max(maxx,val);
	    }
}