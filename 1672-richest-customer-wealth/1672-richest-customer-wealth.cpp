class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int max = 0;
        int sum = 0;
        
        for(int i = 0; i< accounts.size();i++)
        {
            sum = accumulate( accounts[i].begin(), accounts[i].end(),0);
            if(sum > max)
                max = sum;
        }
        return max;
    }
};