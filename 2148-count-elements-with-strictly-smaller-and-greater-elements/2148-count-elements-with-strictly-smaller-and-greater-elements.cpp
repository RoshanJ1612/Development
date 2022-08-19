class Solution {
public:
    int countElements(vector<int>& nums)
    {
         sort(nums.begin(),nums.end());
         int n = nums.size();
        
        int c = 0;
        for(int i = 1; i<nums.size()-1;i++)
        {
            if(nums[i] > nums[0] && nums[i] < nums[n-1])
            {
                c++;
            }
        }
        return c;
    }
};