class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
          int freq = 0.25 * arr.size();
        map<int,int>m;
        for(int i = 0; i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        
        int ans = 0;
        int c = 0;
        
         
        for(auto it : m)
        {
            if(it.second > freq)
            {
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};