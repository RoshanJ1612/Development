class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string s)
    {
        int max = releaseTimes[0];
        int c = 0;
        for(int i = 1; i<releaseTimes.size();i++)
        {
            if(max < releaseTimes[i] - releaseTimes[i-1])
            {
                max = releaseTimes[i] - releaseTimes[i-1];
                c = i;
            }
            else if(max == releaseTimes[i] - releaseTimes[i-1])
            {
                if(s[i] > s[c])
                {
                    c = i;
                }
            }
            else
            {
                continue;
            }
            
            
        }
        return s[c];
        
    }
};