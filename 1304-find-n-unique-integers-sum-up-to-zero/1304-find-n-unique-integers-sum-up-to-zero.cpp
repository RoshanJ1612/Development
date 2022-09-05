class Solution {
public:
    vector<int> sumZero(int n) 
    {
        vector<int>ans;
        
        if(n % 2 != 0)
        {
            ans.push_back(0);
            n--;
        }
        
        int i = n/2;
        while(n != 0)
        {
            int j = i;
            int k = -i;
            ans.push_back(j);
            ans.push_back(k);
            n--;
            n--;
            i--;
        }
        return ans;
            
    }
};