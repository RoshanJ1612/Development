class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
    
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        nums.clear();
     
        
        for(auto it :m)
        {
         
            if(it.second == 1)
            {
                nums.push_back(it.first);
            }
            if(it.second >= 2)
            {
                nums.push_back(it.first);
                nums.push_back(it.first);
            }
            
        }
        
        return nums.size();
        
    }
    
};