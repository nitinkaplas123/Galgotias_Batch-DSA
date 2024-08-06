Question -> https://www.geeksforgeeks.org/problems/merging-two-unsorted-arrays-in-sorted-order1020/1






















Code-:
void sortedMerge(int a[], int b[], int res[],int n, int m)
{
	   sort(a,a+n);
	   sort(b,b+m);
	   
	   int i=0;
	   int j=0;
	   int k=0;
	   
	   while(i<n and j<m)
	   {
	       if(a[i]<=b[j])
	       res[k++]=a[i++];
	       else
	       res[k++]=b[j++];
	   }
	   
	   while(i<n)
	   {
	       res[k++]=a[i++];
	   }
	   
	   while(j<m)
	   {
	       res[k++]=b[j++];
	   }
}