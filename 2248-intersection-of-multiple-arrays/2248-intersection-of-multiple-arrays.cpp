class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n=nums.size();
        map<int,int> m;
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<nums[i].size();j++){
                m[nums[i][j]]++;
            }
        }
        for(auto i:m){
            if(i.second==n)               
                ans.push_back(i.first);
        }
        return ans;
    }
};