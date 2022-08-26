class Solution {
public:
    vector<string> divideString(string s, int k, char fill) 
    {
        int n = s.length()-1;
     
        int i = 0;
        int j = 0;
        string temp;
        vector<string>ans;
        while(j <= n)
        {
            temp = temp + s[j];
            i++;
            j++;
            if(i == k)
            {
                ans.push_back(temp);
                i = 0;
                temp = "";
            }
        }
        
    if (temp != "")
        {
            while (i < k)
            {
                temp += fill;
                i++;
            }
        ans.push_back(temp);
    }
    return ans;    
    }
};