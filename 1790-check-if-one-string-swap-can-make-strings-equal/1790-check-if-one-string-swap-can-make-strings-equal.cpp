class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        if(s1.length() != s2.length())
        {
            return false;
        }
        if(s1 == s2)
        {
            return true;
        }
     
        int c = 0;
        char c1,c2,c3,c4; 
        vector<int>ans;
        for(int i = 0; i<s1.length();i++)
        {
            if(s1[i] != s2[i])
            {
                c++;
                if(c == 1)
                {
                    c1 = s1[i];
                    c2 = s2[i];
                }
                else if(c ==2)
                {
                    c3 = s1[i];
                    c4 = s2[i];
                }
                else
                {
                    break;
                }
            }
        }
        if(c>2)
        {
            return false;
        }
        else if((c == 0) || (c == 2))
            
        {
            if((c1 == c4) && (c2==c3))
            return true;
        }
        
        return false;
    }
};