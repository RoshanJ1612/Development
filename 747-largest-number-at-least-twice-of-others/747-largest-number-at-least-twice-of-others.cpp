class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int maxElementIndex = max_element(nums.begin(),nums.end()) - nums.begin();
        int max = *max_element(nums.begin(),nums.end());  
        
        bool flag = true;
           for(int i = 0; i<nums.size();i++)
        {
                    if(nums[i]!=max && max<2*nums[i])
                    {
                        flag = false;
                         break;
                    }
        }
        if(flag == true)
        {
            return maxElementIndex;
        }
        else
        {
            return -1;
        }
        
    }
};