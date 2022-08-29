class Solution {
public:
    
    int reverse(int n)
    {
        int res = 0;
        while(n != 0)
        {
            int digit = n % 10;
            res = (res * 10) + digit;
            n = n / 10;
        }
        return res;
    }
    
    bool isSameAfterReversals(int num)
    {
        int temp = num;
        num = reverse(num);
        num = reverse(num);
        
        if(num == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
    }
};