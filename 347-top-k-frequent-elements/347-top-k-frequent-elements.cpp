class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
         vector<int>ans;
       unordered_map<int,int>mp;
       for(auto i: nums)
           mp[i]++;
       priority_queue<pair<int,int>>pq;
       for(auto i: mp){
           pq.push({i.second,i.first});
       }
       while(k--){
           auto x = pq.top();
           pq.pop();
           ans.push_back(x.second);
       }
       return ans;
    }
};