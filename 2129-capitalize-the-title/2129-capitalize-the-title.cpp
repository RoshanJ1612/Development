class Solution {
public:
    
   /* string twoletter(string temp)
    {
       for(int i = 0; i <s.length();i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }   
    }
    
    string threeletter(string temp)
    {
        if(s[0] >= 97 && s[0] <= 122)
        {
            s[0] = s[0] - 32;
        }
        
        for(int i = 1; i <s.length();i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
        }
        return s;
        
    }*/
        
    string capitalizeTitle(string title)
    {
        string temp;
        
        for(int i = 0; i<title.length();i++)
        {
             if(title[i] >= 65 && title[i] <= 90)
            {
                title[i] = title[i] + 32;
            }
        }
        
        int i = 0, j = 0, c= 0;
        
        for(i = 0,j = 0; i<title.length() && j < title.length();j++)
        {
            if(title[j] == ' ')
            {
             if(c>2 && (title[i] >= 97 && title[i] <= 122))
            {
                title[i] = title[i] - 32;
            }
                i= j+1;
                c = 0;
            }
            else
            {
                c++;        
            }
        }
        
           if(c>2 && (title[i] >= 97 && title[i] <= 122))
            {
                title[i] = title[i] - 32;
            }
        
        
        
        return title;
        
    }
};