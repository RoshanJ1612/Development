class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        map<int,int>m;
        for(int i = 0; i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        int ans = INT_MAX;
        int max = 0;
        for(auto it : m)
        {
           if(it.second >= max && it.first % 2 == 0)
            {
               if(it.second != max)
               {
                        ans = it.first;
                }
                else
                {
                    if(it.first < ans)
                    {
                        ans = it.first;
                    }
                }
                 max = it.second;
            }
           
         
        }
        
        if(ans == INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};