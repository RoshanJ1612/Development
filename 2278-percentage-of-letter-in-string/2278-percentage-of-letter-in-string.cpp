class Solution {
public:
    int percentageLetter(string s, char letter)
    {
        int c = 0;
        for(int i = 0; i<s.length();i++)
        {
            if(s[i] == letter)
            {
                c++;
            }
        }
        cout<<c<<endl;
        
        
        return (c*100)/s.length();
    }
};