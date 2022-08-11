class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums)
    {
        
        vector<int>ans(nums.size()+1,0);
        for(int i = 0; i<nums.size();i++)
        {
            ans[nums[i]]++;
        }
            
        nums.clear();
        int twice = 0;
        int loss = 0;
        for(int i = 1; i<ans.size();i++)
        {
            if(ans[i] == 0)
            {
                loss = i;
            }
            if(ans[i] == 2)
            {
                twice = i;
            }
        }
        
        nums.push_back(twice);
        nums.push_back(loss);
        return nums;
        
        
    
    }
};