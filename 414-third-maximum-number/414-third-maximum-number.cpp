class Solution {
public:
    
    
    
    int thirdMax(vector<int>& nums) 
    {
       set<int> s;
 
    // Traverse the Vector
    for (int x : nums) 
    {
        s.insert(x);
    }
    
        
     vector<int> no(s.begin(), s.end());
    
        int n = no.size();
        
        if(n<3)
        {
            return no[n-1];
        }
        else
        {
            return no[n-3];
        }
        
    }
    
    
  
};