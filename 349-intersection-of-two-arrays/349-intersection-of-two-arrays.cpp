class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
        {
            
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    v.push_back(nums1[i]);
                }
            }
        }
        
          auto end = v.end();
    for (auto it = v.begin(); it != end; ++it)
    {
        end = std::remove(it + 1, end, *it);
    }
 
    v.erase(end, v.end());
     return v;

    }
    
    
};