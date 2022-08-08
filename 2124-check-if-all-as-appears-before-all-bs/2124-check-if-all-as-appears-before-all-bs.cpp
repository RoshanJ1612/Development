class Solution {
public:
    bool checkString(string s)
    {
        string temp = s;
        sort(temp.begin(),temp.end());
        bool flag = true;
        
        for(int i = 0; i<s.length();i++)
        {
            if(s[i] != temp[i])
            {
                flag = false;
            }
        }
        return flag;
            
    }
};