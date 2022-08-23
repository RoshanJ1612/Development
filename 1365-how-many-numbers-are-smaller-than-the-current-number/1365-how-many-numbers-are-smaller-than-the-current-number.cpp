class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int>temp(nums);
        sort(temp.begin(),temp.end());
        vector<int>ans;
        for(int i = 0; i<nums.size();i++)
        {
            int c = 0;
            for(int j = 0;j<temp.size();j++)
            {
                if(temp[j] < nums[i])
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};