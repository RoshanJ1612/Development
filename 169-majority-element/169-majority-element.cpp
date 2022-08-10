class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        if(nums.size() == 1)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        int count = 0; int majority = 0, ans = 0,i = 0;
        for( i = 0; i< nums.size()-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                count++;
            }
              
                else
                {
                    if(count>majority)
                      {
                
                    majority = count;
                    ans = nums[i];
                      }
                   count = 0;
                }
            }
        
          if(count>majority)
        {
                
                    majority = count;
                    ans = nums[i];
        }
        
        return ans;
    }
};