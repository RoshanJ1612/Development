class Solution {
public:
    int countbit(int n)
    {
        int c = 0;
          while(n != 0)
            {
                if(n & 1 == 1)
                {
                    c++;   
                }
              n= n>>1;
            }
        return c;
    }
    vector<int> countBits(int n)
    {
        vector<int>ans;
        for(int i = 0; i<=n;i++)
        {
            ans.push_back(countbit(i));
        }
        return ans;
               
    }
};