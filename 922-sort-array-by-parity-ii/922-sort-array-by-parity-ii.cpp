class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums)
    {
         vector<int>even;
        vector<int>odd;
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i] % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        int n = nums.size();
       nums.clear();
        int e = 0;
        int o = 0;
        for(int i = 0; i<n;i++)
        {
            if(i % 2 == 0)
            {
                nums.push_back(even[e]);
                e++;
            }
            else
            {
                nums.push_back(odd[o]);
                o++;
            }
        }
        
        return nums;
        
    }    
    
};