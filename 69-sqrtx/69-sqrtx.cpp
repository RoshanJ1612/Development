class Solution {
public:
    int mySqrt(int x) 
    {
        long long square = 1,start = 0, end = x,mid = (start + end)/2, ans = 0;
        while(start <= end)
        {
            mid = (start + end)/2;
            square = mid * mid;
            if(square == x)
            {
                ans = mid;
                break;
            }
            else if(square > x)
            {
                end = mid - 1;
                
            }
        
            else if(square < x)
            {
                start = mid + 1;
                ans = mid;
            }
    }
        
        return ans;
    }
        
};