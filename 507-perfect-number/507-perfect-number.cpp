class Solution {
public:
    bool checkPerfectNumber(int n)
    {
        if(n==1)
        {
            return false;
        }
        int sum = 1;
        for(int i = 2;i<= (n/2);i++)
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