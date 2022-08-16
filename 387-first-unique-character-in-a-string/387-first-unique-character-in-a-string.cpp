class Solution {
public:
    int firstUniqChar(string str)
    {
       unordered_map<char,int>m;
        
        for(int i = 0; i<str.length();i++)
        {
            m[str[i]]++;
        }
        
        int i = 0;
        int j = -1;
        for(i = 0; i<str.length();i++)
        {
            if(m.find(str[i])->second == 1)
            {
                j = i;
                break;
            }
        }
        return j;
    }
};