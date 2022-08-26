class Solution {
public:
    int findGCD(vector<int>& nums)
    {
        int max = *max_element(nums.begin(),nums.end());
        int min = *min_element(nums.begin(),nums.end());
        int result = min;
        
        while(result > 0)
        {
            if (min % result == 0 && max % result == 0)
            {
                break;
            }
            result--;
        }
        return result;
        
    }
};