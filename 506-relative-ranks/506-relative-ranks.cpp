class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
            vector<string>ans;
            vector<int>temp(score);
            sort(temp.begin(), temp.end(), greater<int>());
            
            for(int i = 0; i<score.size();i++)
            {
                int k = score[i];
                auto it = find(temp.begin(), temp.end(), k);
                int index = it - temp.begin();
                if(index == 0)
                {
                    ans.push_back("Gold Medal");   
                }
                else if(index == 1)
                {
                    ans.push_back("Silver Medal");
                }
                 else if(index == 2)
                {
                    ans.push_back("Bronze Medal");
                }
                 else 
                {
                     string a = to_string(index + 1);
                     ans.push_back(a);
                }
            }
        return ans;
    }
};