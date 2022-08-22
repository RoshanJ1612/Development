class Solution {
public:
    bool isPowerOfFour(int n) {
        
         if(n == 0)
        {
            return false;
        }
        
        while(n != 0)
        {
            if(n % 4 == 0)
            {
                n = n /4;
            }
            else if(n == 1)
            {
                return true;
            }
                
            else
            {
                return false;
            }
        }
        return true;
        
        
    }
};