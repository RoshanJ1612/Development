class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        sort(stones.begin(),stones.end());
        auto it = stones.begin();
        for(int i = stones.size()-1;i>0;i--)
        {
           
            
            if(stones[i] == stones[i-1])
            {
                stones.erase(it+i);
                 stones.erase(it+i-1);
                i--;
            }
            else if(stones[i] != stones[i-1])
            {
                stones.erase(it+i);
                stones[i-1] = stones[i]-stones[i-1];
            }
               if(stones.size() == 1 || stones.size() == 0)
            {
                stones.push_back(0);
                break;
            }
            else
            {
            sort(stones.begin(),stones.end());
            }
        }
        return stones[0];
        
    }
};