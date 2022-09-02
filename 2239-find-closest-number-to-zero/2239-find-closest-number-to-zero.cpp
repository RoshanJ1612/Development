class Solution {
public:
    int findClosestNumber(vector<int>& nums)
    {   
        int ans = INT_MAX;
        sort(nums.begin(),nums.end());
        int temp = 0;
        int no = 0;
        for(int i = 0; i<nums.size();i++)
        {
            temp = nums[i];
            
            if(temp < 0)
            {
                temp = -temp;
            }
            
            if(temp <= ans)
            {
                ans = temp;
                no  = nums[i];
            }
        }
        
        return no;
        
        
    }
};