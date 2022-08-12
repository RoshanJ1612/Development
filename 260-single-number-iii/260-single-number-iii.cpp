class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
         map<int, int> M;
        vector<int>ans;
        for (int i = 0; i<nums.size(); i++) 
        {
            if (M.find(nums[i]) == M.end()) 
            {
                M[nums[i]] = 1;
            }
            else
            {
                M[nums[i]]++;
            }
        }
           for (auto& it : M)
           {
               if(it.second == 1)
               {
                   ans.push_back(it.first);
                   
               }
           }
        return ans;
    }

            
    
};