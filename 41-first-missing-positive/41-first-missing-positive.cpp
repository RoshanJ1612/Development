class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
         nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int iCnt = 1, n = nums.size(),i = 0;
        
        
        for(int i = 0;i<n;i++)
        {
            if(nums[i] > 0)
            {
                if(nums[i] == iCnt)
                {
                    iCnt++;
                }
                else
                {
                    break;
                }
            }
        }
        return iCnt;
        
    }
};