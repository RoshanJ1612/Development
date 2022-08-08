class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        int max = *max_element(candies.begin(),candies.end());
        cout<<max<<endl;
        vector<bool>ans;
        for(int i = 0; i<candies.size();i++)
        {
            candies[i] = candies[i] +  extraCandies;
        }
        
        for(int i = 0; i< candies.size();i++)
        {
            cout<<candies[i]<<endl;
        }
    
        
        for(int i = 0; i<candies.size();i++)
        {
            if(candies[i] >= max)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};