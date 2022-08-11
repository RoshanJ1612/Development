class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int n = nums.size();
           nums.erase(unique(nums.begin(), nums.end()), nums.end());
        for(int i = 0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }
        vector<int>ans;
        for(int i = 1,j = 0; i<=n;i++)
        {
            if(nums[j] == i)
            {
                j++;
            }
            else
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};