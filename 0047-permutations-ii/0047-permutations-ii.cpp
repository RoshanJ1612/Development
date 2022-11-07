class Solution {
public:
    void solve(vector<int> &ds, vector<vector<int>> &ans, vector<int> &nums, int freq[]){
        if(ds.size() == nums.size()){
            ans.emplace_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.emplace_back(nums[i]);
                freq[i] = 1;
                solve(ds, ans, nums, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<vector<int>> a;
        vector<int> ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=0;
        solve(ds, ans, nums, freq);
        set<vector<int>> s;
        for(auto i:ans){
            s.insert(i);
        }
        for(auto it:s){
            a.emplace_back(it);
        }
        return a;
        
    }
};