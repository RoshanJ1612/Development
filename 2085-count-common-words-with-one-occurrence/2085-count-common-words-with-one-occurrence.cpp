class Solution {
public:
      int countWords(vector<string>& words1, vector<string>& words2) 
    {
        int res=0;
        unordered_map<string,int> m1,m2;
        for(auto &w:words1)
        {
            m1[w]++;
        }
        for(auto &w:words2)
        {
            m2[w]++;
        }
        for(auto &w:words1)
        {
            if(m1[w]==1&&m2[w]==1)
                res++;
        }
        return res;
        
    }

    
};