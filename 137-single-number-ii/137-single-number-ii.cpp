class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
    
         map<int, int> M;
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
        int ans = 0;
           for (auto& it : M)
           {
               if(it.second == 1)
               {
                   ans = it.first;
                   break;
               }
           }
        return ans;
    }   
    
};