class Solution {
public:
    int mostWordsFound(vector<string>& s) 
    {
        vector<int>ans;
        
        for(int i = 0; i<s.size();i++)
        {
             int space = 1;
            string temp = s[i];
            for(int i = 0; i<temp.length();i++)
            {
                if(temp[i] == ' ')
                {
                    space++;
                }
            }
            ans.push_back(space);
        }
        
        return *max_element(ans.begin(),ans.end());
    }
};