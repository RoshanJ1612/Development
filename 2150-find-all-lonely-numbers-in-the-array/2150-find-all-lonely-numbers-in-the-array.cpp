class Solution {
public:
    vector<int> findLonely(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        map<int,int>m;
        for(int i = 0; i<nums.size();i++)
        {
                 m[nums[i]]++;
        }
        vector<int>ans;
        for(auto it : m)
        {
              if(it.second==1 and m.find(it.first+1)==m.end() and m.find(it.first-1)==m.end())
                ans.push_back(it.first);

        }
        
        return ans;
    }
};