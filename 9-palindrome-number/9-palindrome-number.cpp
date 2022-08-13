class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0)
        {
            return false;
        }
        if(x > INT_MAX/10 and x%10 > 2) {
		return false;
	    }
        int temp = x;
        int reverse = 0;
        while(x!=0)
        {
            int digit = x % 10;
            reverse = reverse*10 + digit;
            x = x / 10;
        }
        if(reverse == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};