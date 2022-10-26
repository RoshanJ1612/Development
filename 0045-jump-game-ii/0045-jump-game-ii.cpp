class Solution {
public:
    int jump(vector<int>& nums) {
        int position = 0;
        int step = 0;
        while(position < nums.size()-1){
            step++;
            int reach = position + nums[position]; //farest position this round can reach
            if(reach >= nums.size()-1){            // can already hop to end at this spot(step already ++)
                return step;
            }
            
            int farestRange = INT_MIN;
            int nextPosition = position;
            
            // for each index this position can reach, select one that can hop farest in next step
            for(int i=position;i<=reach;i++){
                if(i+nums[i]>farestRange){
                    nextPosition = i;
                    farestRange=i+nums[i];
                }
            }
            position = nextPosition;
        }
        return step;
    }
};