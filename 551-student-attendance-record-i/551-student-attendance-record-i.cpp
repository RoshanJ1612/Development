class Solution {
public:
    bool checkRecord(string s) 
    {
        int A = 0, SL = 0, L = 0;
        
        for(int i = 0; i<s.length();i++)
        {
            if(s[i] == 'P')
            {
                SL = 0;
                continue;
            }
            else if(s[i] == 'L')
            {
                L++;
                SL++;
                if(SL ==3)
                {
                    break;
                }
            }
            else 
            {
                A++;
                SL = 0;
                
            }
            
        }
        cout<<SL<<endl;
        cout<<A<<endl;        
        if(SL >= 3)
        {
            return false;
        }
        else  if(A >= 2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};