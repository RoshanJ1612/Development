class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int k = digits[digits.size() - 1]   ;
        for(int i = digits.size() - 1; i > -1 ; i--)
        {
            if(digits[i] < 9 )
            {
                digits[i] ++ ; 
                return digits ;
            }
            else
            {
                digits[i] = 0 ;
            }
                
        }
        digits.push_back(0); 
        digits[0] = 1;
        return digits ; 
    }
};