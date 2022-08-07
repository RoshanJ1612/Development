class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        bool flag = false;
        for(int i = 0,j=1; i<nums.size(),j<nums.size();i++,j++)
        {
            
            if(nums[i] == nums[j])
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
};