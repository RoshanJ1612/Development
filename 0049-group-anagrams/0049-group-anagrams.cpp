class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            map<char,int> temp;
            for(int j=0;j<strs[i].size();j++){
                temp[strs[i][j]]++;
            }
            mp[temp].push_back(strs[i]);
            }
            vector<vector<string>> res;
            for(auto it : mp){
                res.push_back(it.second);
            }
            return res;
        }
};