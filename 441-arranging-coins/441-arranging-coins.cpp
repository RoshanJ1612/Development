class Solution {
public:
    int arrangeCoins(int n)
    {
        int c = 0;
        int i = 1;
        while(n >= i)
        {
            n = n-i;
            i++;
            c++;
        }
        return c;
    }
};