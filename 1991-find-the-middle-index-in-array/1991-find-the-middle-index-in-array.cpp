class Solution {
public:
    int findMiddleIndex(vector<int>& nums)
    {
         int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        
        int s=0;
        for(int i=0;i<nums.size();i++){
            sum=sum-nums[i];
            if(s==sum)
                return i;
            
            s=s+nums[i];
       
        }
        
        return -1;
        
    }
};