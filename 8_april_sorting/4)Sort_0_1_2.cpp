This algo is called National Dutch Algorithms

Steps-:
1)From 0 to low we have all 0 elements.
2)From low to mid we have all 1 elements.
3)From mid to n-1 we have all 2 elements.
4)Here we break when mid cross high 


Code-:  Time->O(N)   Space ->O(1)
void sort012(int a[], int n)
    {
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a[low],a[mid]);
                low++;
                mid++;
            }
            else if(a[mid]==1)
            mid++;
            else
            {
               swap(a[mid],a[high]);
               high--;
            }
        }
    }


Solution 2-:
Steps-:
1)Using lomuto partition

Code-:
void sort012(int a[], int n)
{
       int i=-1;
       for(int j=0;j<n;j++)
       {
           if(a[j]==0)
           {
               i++;
               swap(a[i],a[j]);
           }
       }
       
       for(int j=i+1;j<n;j++)
       {
           if(a[j]==1)
           {
               i++;
               swap(a[i],a[j]);
           }
       }
}