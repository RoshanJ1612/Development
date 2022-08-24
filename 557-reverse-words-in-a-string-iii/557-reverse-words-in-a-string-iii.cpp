class Solution {
public:
    string reverseWords(string s)
    {
        string ans = "";
        string temp = "";
        for(int i = 0; i<s.length();i++)
        {
            if(s[i] != ' ')
            {
                temp = temp + s[i];
            }
            else
            {
                reverse(temp.begin(),temp.end());
                ans = ans + temp + ' ';
                temp = "";
            }
        }
        
        if(temp.length() != 0)
        {
             reverse(temp.begin(),temp.end());
                ans = ans + temp;
        }
        return ans;
    }
};