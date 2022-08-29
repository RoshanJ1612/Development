class Solution {
public:
    bool countdigit(int no)
    {
        int c = 0;
        while(no != 0)
        {
            no = no / 10;
            c++;
        }
        if(c % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    
    int findNumbers(vector<int>& nums)
    {
        int ans = 0;
        
        for(int i = 0; i<nums.size();i++)
        {
            if(countdigit(nums[i]))
            {
                ans++;
            }
        }
        return ans;
    }
};