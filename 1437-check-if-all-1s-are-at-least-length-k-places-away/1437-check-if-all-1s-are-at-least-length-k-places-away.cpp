class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) 
    {
        int c = 0;
        int i = 0;
          if(nums[0] == 1)
            {
                i = 1;
            }
        else if(nums[1] == 1)
        {
            i = 2;
        }
        else
        {
            i = 0;
        }
        for(; i<nums.size();i++)
        {
          
            if(nums[i] == 1)
            {
                if(c<k)
                {
                    return false;
                }
                c = 0;
            }
            else
            {
                c++;
            }
        }
        return true;
    }
};