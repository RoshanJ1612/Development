class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) 
    {
        map<int,int>mp;
        map<int,int>m;
        vector<int>ans;
        for(int i = 0; i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        
        for(int i = 0; i<nums2.size();i++)
        {
            if(mp.find(nums2[i])!=mp.end())
            {
                ans.push_back(nums2[i]);
            }
            else
            {
                m[nums2[i]]++;
            }
        }
        
          for(int i = 0; i<nums3.size();i++)
        {
            if(m.find(nums3[i])!=m.end() || mp.find(nums3[i])!=mp.end())
            {
               auto it = find (ans.begin(), ans.end(), nums3[i]);
                if (it == ans.end())
                {
                    ans.push_back(nums3[i]);
                }
            }
            
          }
        
         auto end = ans.end();
    for (auto it = ans.begin(); it != end; ++it) {
        end = std::remove(it + 1, end, *it);
    }
 
    ans.erase(end, ans.end());
         
        
        return ans;
    }
};