class Solution {
public:
static int comp(pair<char,int>&a,pair<char,int>&b){
return a.second>b.second;
}
string frequencySort(string s) {
vector<pair<char,int>>vec;
map<char,int>mp;
for(int i=0;i<s.size();i++)mp[s[i]]++;
for(auto a:mp)vec.push_back({a.first,a.second});
sort(vec.begin(),vec.end(),comp);
string ans="";
for(auto a:vec){
for(int i=0;i<a.second;i++)ans+=a.first;
}
return ans;

}
};