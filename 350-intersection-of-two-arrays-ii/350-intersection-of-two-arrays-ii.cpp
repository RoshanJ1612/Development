class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int, int> m;
        
        for(int i = 0; i < nums1.size(); ++i)
        {
            m[nums1[i]] += 1;
        }
        
        vector<int> retVal;
        for(int i = 0; i < nums2.size(); ++i)
        {
            auto it = m.find(nums2[i]);
            if(m.end() != it && it->second > 0)
            {
                retVal.push_back(nums2[i]);
                it->second -= 1;
            }
        }
        
        return retVal;
    }
};