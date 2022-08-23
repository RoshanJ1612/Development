class Solution {
public:
    bool isUgly(int n) {
        if (n<=0) return false;
        return func(n);
    }
    bool func(int n){
        if(n==1)
            return true;
        if (n%2==0) 
            return func(n/2);
        else if (n%3==0) 
            return func(n/3);
        else if(n%5==0) 
            return func(n/5);
        else 
            return false;
    }
};