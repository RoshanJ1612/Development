class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs[strs.size()-1];
        int d=min(s1.length(),s2.length());
        int i=0;
        string ans="";
        for(i;i<d;i++){
            if(s1[i]==s2[i]){
                ans+=s1[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};