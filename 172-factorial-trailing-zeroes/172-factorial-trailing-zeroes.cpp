class Solution {
public:
    int trailingZeroes(int n) 
    {
      
        int ans=0;
        
        for(int i=2; i<=n; i++){
            int num =i;
            while(num%5==0){
                ans++;
                num/=5;
            }
        }
        
        return ans;
    }
    
};