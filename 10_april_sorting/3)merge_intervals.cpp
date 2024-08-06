Questions ->https://www.geeksforgeeks.org/problems/overlapping-intervals--170633/1

Solution 1-:
Steps-:
1)here we have to sort the intervals vector
2)Three cases-:
  1. [[1,3],[2,6]]]
     here when v.back()[1]>intervals[i][0] and v.back()[1]<=intervals[i][1]
     =>v.back()[1]=intervals[i][1]

  2. [[1,3],[4,6]]
     here when v.back()[1]<intervals[i][0]
     v.push_back(intervals[i])

  3. [[1,4],[2,3]]   =>v[[1,4]]
      here 2nd intervals values are smaller than v.back()[1]
      so here we continue the loop without any changes

Code-: Time->O(nlogn)
 vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>v;
        v.push_back(intervals[0]);
        
        int n=intervals.size();
        for(int i=1;i<n;i++)
        {
            int first=intervals[i][0];
            int second=intervals[i][1];
            
            if(first<=v.back()[1] and second>v.back()[1])
            v.back()[1]=intervals[i][1];
            else if(first>v.back()[1])
            v.push_back(intervals[i]);
            else
            continue;
        }
        return v;
}
