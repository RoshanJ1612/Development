class Solution {
public:
   string kthDistinct(vector<string>& arr, int k) {
        
        map<string, int> m;
        
        for( auto it : arr)
        {
            
            m[it]++;
            
        }
        
    vector< string> temp;
     for( auto x : arr)
     {
         
         if(m[x]==1)
         {
             temp.push_back(x);
         }
         
     }
        
        
        int n= temp.size();
        
        
        if( n<k)return "";
        
        else
            return temp[k-1];
        
        
    }
    
};