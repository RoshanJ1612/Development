class Solution {
public:
    bool checkPerfectNumber(int n)
    {
        int sum = 0;
        for(int i = 1;i<= (n/2);i++)
        {
            if(n % i == 0)
            {
                sum = sum + i;
            }
        }
       
        if(sum == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};