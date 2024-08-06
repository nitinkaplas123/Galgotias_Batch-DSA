Sol1-:
vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int val=1;
            for(int j=0;j<n;j++)
            {
              if(j!=i)
              val*=nums[j];
            }
            v.push_back(val);
        }
        return v;
    }

Solution 2-:
 vector<int> productExceptSelf(vector<int>& nums) 
 {
        int product = 0;
        int product_without_zero = 1;
        for(int i: nums) {
            if(i == 0)
            product++;
            else
            product_without_zero *= i;
        }
        
        vector<int> result(nums.size());
        for(int i = 0; i<nums.size(); i++) 
        {
            if(nums[i] != 0) 
            {
                if(product > 0)
                result[i] = 0;
                else
                result[i] = product_without_zero/nums[i];
            }
            else {
                if(product > 1)
                result[i] = 0;
                else
                result[i] = product_without_zero;
            } 
        }
        return result;
    }
};