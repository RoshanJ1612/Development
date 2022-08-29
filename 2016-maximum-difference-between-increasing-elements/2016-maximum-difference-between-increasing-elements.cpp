class Solution {
public:
    int maximumDifference(vector<int>& nums) 
    {
        int max = -1;
        
        for(int i = 0; i<nums.size();i++)
        {
            for(int j = i; j<nums.size();j++)
            if(nums[j]-nums[i] > 0 && nums[j]-nums[i] > max)
            {
                max = nums[j]-nums[i];
            }
        }
        
        return max;

    }
};