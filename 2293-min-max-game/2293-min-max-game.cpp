class Solution {
public:
int minMaxGame(vector<int>& nums) {
        int n=size(nums);
        if(n==1)
                return nums[0];
       vector<int> num(n/2);
        for(int i=0;i<n/2;i++){
            if(i&1)
                num[i]=max(nums[2*i],nums[2*i+1]);
            else
                num[i]=min(nums[2*i],nums[2*i+1]);
        }
        return minMaxGame(num);
    }
};