class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
        /*map<int,int>m;
        for(int i = 0; i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        int ans = 0;
        for(auto it:m)
        {
            if(it.second == 1)
            {
                ans = it.first;
                break;
            }
        }
        return ans;
    }*/
        
    int ans = 0;
    for(auto it : nums)
    ans ^= it;
    return ans;
    }
};