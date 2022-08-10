class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s)
    {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int j=0,k=0,count=0;
    for(int i=0;i<s.size();i++)
    {
        if(count==g.size())
        {
        return count;
        }
        else
        {
            if(s[j]>=g[k])
            {
                count++;j++;k++;
            }
            else
            {
                j++;
            }
        }
    }
    return count;
    }
}; 
    
    
   