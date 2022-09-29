class Solution {
public:
   vector<string> lc(string s,unordered_map<char,string>m)
    {
        string str;
       if(s.size()==1)
       {
           string f=m[s[0]];
            vector<string>ans;
           for(auto val:f)
           {
               string k(1,val);
               ans.push_back(k);
           }
           return ans;
       }
       
       for(int i=1;i<s.size();i++){str.push_back(s[i]);}
       vector<string>v=lc(str,m);
       vector<string>ans;
       string st=m[s[0]];
       for(int i=0;i<st.size();i++)
       {
           string f(1,st[i]);
           for(auto val:v)
           {
               ans.push_back(f+val);
           }
       }
       return ans;
    }
    vector<string> letterCombinations(string digits) {
     
         vector<string>ans;
          if(digits.size()==0)return ans;
        unordered_map<char,string>m;
        m['2']="abc";m['3']="def";m['4']="ghi";m['5']="jkl";m['6']="mno";
        m['7']="pqrs";m['8']="tuv";m['9']="wxyz";
        ans=lc(digits,m);
        return ans;
    }
};