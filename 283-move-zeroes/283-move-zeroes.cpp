class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
	int numZero = 0;
    for (auto num : nums)
        if (num == 0)
            numZero++;
   
    remove(nums.begin(), nums.end(), 0);
    
    for (int i = nums.size() - numZero;
             i < nums.size(); i++) {
        nums[i] = 0;
    }
    }
};