class Solution {
public:
    int countElements(vector<int>& nums)
    {
         sort(nums.begin(),nums.end());
         int n = nums.size();
         int min = nums[0];
         int max = nums[n-1];
        int c = 0;
        for(int i = 1; i<nums.size()-1;i++)
        {
            if(nums[i] > min && nums[i] < max)
            {
                c++;
            }
        }
        return c;
    }
};