class Solution {
public:
    string replaceDigits(string s) 
    {
        for(int i = 0; i<s.length();i++)
        {
            if(s[i] >=48 && s[i] <=57)
            {
               s[i] = s[i-1] + (s[i] - 48); 
            }
        }
        return s;
    }
};