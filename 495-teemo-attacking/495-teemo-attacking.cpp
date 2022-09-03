class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) 
    {
        int total = 0;
        int c = 1;
        for(int i = 0; i< t.size()-1;i++)
        {
            if(t[i+1]-t[i] < d)
            {
                total = total + (t[i+1]-t[i]);
            }
            else
            {
                c++;                         
            }
        }
        
        return (c*d + total);
    }
                                 
                                 
};