class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        if(nums.size() == 1)
        {
            return 0;
        }
        if(nums.size() == 2)
        {
            if(nums[0] > nums[1])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        
        
        int ans = 0;
        for(int i = 1;i<nums.size()-1;i++)
        {
            if(nums[i] > nums[i-1] && nums[i]>nums[i+1])
            {
                ans = i;
                break;
            }
        }
        
        if(ans != 0)
            return ans;
        
          for(int i = 1;i<nums.size();i++)
        {
            if(nums[i] > nums[i-1])
            {
                ans = i;
            }
        }
        return ans;
    }
};