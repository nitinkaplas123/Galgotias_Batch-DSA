https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1

Solution 1-:
Steps-:
1)Using max_heap 
2)Make a heap of size k 
3)now traverse a loop from k to n-1 if pq.top()>arr[i] then remove the top element and push that arr[i]
4)At last we have kth smallest element at top of k size heap.

Code-: Time->O(nlog(k)) Space ->o(k)
 int kthSmallest(int arr[], int l, int r, int k) 
    {
      priority_queue<int>pq;
      for(int i=0;i<k;i++)
      {
          pq.push(arr[i]);
      }
      
      for(int i=k;i<=r;i++)
      {
          if(pq.top()>arr[i])
          {
              pq.pop();
              pq.push(arr[i]);
          }
      }
      return pq.top();
    }


Java-:
 public static int kthSmallest(int[] arr, int l, int r, int k) 
    { 
        PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b - a);
        
        for (int i = l; i < l + k; i++) {
            pq.add(arr[i]);
        }

        for (int i = l + k; i <= r; i++) {
            if (pq.peek() > arr[i]) {
                pq.poll();
                pq.add(arr[i]);
            }
        }
        
        return pq.peek();
    } 