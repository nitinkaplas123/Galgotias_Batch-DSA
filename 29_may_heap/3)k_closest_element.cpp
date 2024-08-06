https://www.geeksforgeeks.org/problems/k-closest-elements3619/1

Soltuion 1-:
int findCrossOver(vector<int> arr, int low, int high, int x) 
{
    if (arr[high] <= x)
    return high;
    if (arr[low]>= x)
    return low;

    while (low <= high) 
    {
        int mid = (low + high) / 2;
        if(arr[mid]==x) return mid;
        
        else if (arr[mid] < x && arr[mid + 1] > x)
        return mid;
        else if (arr[mid] < x)
        low = mid + 1;
        else
        high = mid - 1;
    }
    return -1;
}
    
vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
       
        vector<int>v;
        int left,right;
        int index=findCrossOver(arr,0,n-1,x);
        if(arr[index]==x)
        left=index-1;
        else
        left=index;
        
        right=index+1;
        
        while(left>=0 && right<n && k)
        {
            int x1=x-arr[left]; //left 
            int x2=arr[right]-x;//right
            
            if(x1<x2)
            v.push_back(arr[left--]);
            else
            v.push_back(arr[right++]);
            k--;
        }
        
        while(k && left>=0)
        {
            v.push_back(arr[left--]);
            k--;
        }
        
        while(k && right<n)
        {
            v.push_back(arr[right++]);
            k--;
        }
        return v;
}