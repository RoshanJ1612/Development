class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int c = 0;
        int last = 0;
        for(int i = 0;i < s.length();i++)
        {
            if(s[i] == ' ')
            {
                
                c = 0;
            }
            else
            {
            c++;
            last = c;
            }
        }
        
        return last;
        
    }
};