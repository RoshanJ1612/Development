class Solution {
public:
    static bool cmp(pair<int,string>a, pair<int,string>b){
        if(a.first==b.first) return a.second<b.second;
        return a.first>b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>f;
        for(auto a:words) ++f[a];
        
        vector<pair<int,string>> to_sort;
        for(auto a:f) to_sort.push_back({a.second,a.first});
        sort(to_sort.begin(), to_sort.end(),cmp);
        
        
        
        vector<string> ans;
        for(int i=0; i<k; ++i) 
            ans.push_back(to_sort[i].second);
        return ans;
    }
};