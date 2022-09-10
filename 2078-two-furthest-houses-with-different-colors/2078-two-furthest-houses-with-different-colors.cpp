class Solution {
public:
    int maxDistance(vector<int>& colors) 
    {
     int n = colors.size();
    int ans = 0;
    int maxi = INT_MIN;
    for(int i =0; i<n ; i++)
    {
        for(int j = 0; j<n;j++)
        {
            if(colors[i]!=colors[j])
            ans = abs(i-j);
            maxi = max(maxi,ans);
        }
    }
    return maxi;
        
    }
};