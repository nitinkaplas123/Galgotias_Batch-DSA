Code-:
void quickSort(int arr[], int low, int high)
{
        if(low<high)
        {
            int p=partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
        }
}
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot=arr[high];
       int i=low-1;
       for(int j=low;j<high;j++)
       {
           if(arr[j]<pivot)
           {
               i++;
               swap(arr[i],arr[j]);
           }
       }
       swap(arr[i+1],arr[high]);
       return i+1;
    }

  TestCase -> O(N^2)
 [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

  O(nlog(n))
  when we divide the array into two equal parts.
  
Time Complexity -:
Both are giving me O(N^2) time.
arr = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

In the average and best cases, QuickSort has a time complexity of O(n log n), where 'n' is the number of 
elements in the array. This occurs when the pivot elements are chosen in such a way that the array is 
divided into roughly equal parts at each recursive step.

In the worst-case scenario, QuickSort can have a time complexity of O(n^2). This occurs when the pivot 
element chosen is either the smallest or largest element in the array in each partition step, leading 
to unbalanced partitions.



Space -:
The space complexity of the QuickSort algorithm primarily depends on the stack space used for function calls
 during the recursion.

1)In the worst case, QuickSort may require O(n) space in the function call stack, where n is the number 
  of elements in the array. This occurs when the partitioning consistently selects the smallest or 
  largest element as the pivot, leading to unbalanced partitioning and essentially mimicking the 
  behavior of insertion sort. In such a scenario, the recursion depth would be equal to the number
  of elements in the array, resulting in O(n) space complexity.

2)average and best cases, the space complexity of QuickSort is O(log n), where n is the number of 
  elements in the array. This is because the partitioning generally results in a balanced partitioning 
  of the array, leading to a recursion depth of O(log n).

Worst case space complexity: O(n)
Average case space complexity: O(log n)
Best case space complexity: O(log n)