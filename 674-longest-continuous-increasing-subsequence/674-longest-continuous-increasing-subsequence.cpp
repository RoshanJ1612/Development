class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
        if(nums.size() == 1)
        {
            return 1;
        }
        int c = 1;
        int max = 0;
        for(int i = 1;i<nums.size();i++)
        {
            if(nums[i] > nums[i-1])
            {
                c++;
                if(c > max)
                {
                    max = c;
                }
            }
            else
            {
                if(c > max)
                {
                    max = c;
                }
                c = 1;
            }
        }
        
      
        return max;
    }
};