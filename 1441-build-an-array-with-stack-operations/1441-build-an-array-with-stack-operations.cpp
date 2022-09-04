class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n)
    {
        int i = 1;
        int c = 0;
        vector<string>ans;
        while(i <= n)
        {
            ans.push_back("Push");
            if(i == target[c])
            {
                c++;
                
                if(c>target.size()-1)
                {
                    break;
                }
            }
            else
            {
                 ans.push_back("Pop");
            }
            i++;
        }
        return ans;
    }
};