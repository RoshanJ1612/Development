class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) 
    {
     string ans = "";
        int i =0, j = 0;
        while(i < s.size()){
            if(j < spaces.size() && i == spaces[j]){
                ans += " ";
                ans += s[i];
                i++; j++;
            }
            else{
                ans += s[i];
                i++;
            }
            
        }
        return ans;
    }
};