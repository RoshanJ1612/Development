class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        if(nums.size() == 1)
        {
            return nums;
        }
        if(nums.size() == 2)
        {
            if(nums[0] != nums[1])
            {
                return nums;
            }
        }
        
        vector<int>ans;
        int n = nums.size()/3;
        sort(nums.begin(),nums.end());
        int count = 0;
        int temp = 0;
        for(int i = 0; i<nums.size()-1;i++)
        {
                if(nums[i] == nums[i+1])
                {
                    count++;
                    temp = nums[i];
                }
                
                else
                {
                    if(count>=n)
                    {
                        ans.push_back(temp);
                    }
                    count = 0;
                }
            }
        
        if(count>=n)
        {
             ans.push_back(temp);
        }
        
        return ans;
        }
        
    
};