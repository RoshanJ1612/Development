class Solution {
public:
    char repeatedCharacter(string s)
    {
        set<char>set;
        set.insert(s[0]);
        char ans = ' ';
        for(int i =1;i<s.length();i++)
        {
            if (set.find(s[i]) != set.end())
            {
                ans = s[i];
                break;
            }
            else 
            {
                 set.insert(s[i]);
            }
        }
        
        return ans;
        
         
         
        
    }
};