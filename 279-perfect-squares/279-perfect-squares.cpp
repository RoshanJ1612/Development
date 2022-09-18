class Solution {
public:
    int numSquares(int n) {
        vector<int> squares;
        for(int i = 1; i <= sqrt(n); i++) squares.push_back(i*i);
        vector<vector<int>> dp(squares.size()+1, vector<int>(n+1, 0));
        for(int i = 1; i <= n; i++) dp[0][i] = INT_MAX-1;
        for(int i = 1; i <= squares.size(); i++)
            for(int j = 1; j <= n; j++)
                if(j >= squares[i-1]) dp[i][j] = min(dp[i-1][j], 1 + dp[i][j-squares[i-1]]);
                else dp[i][j] = dp[i-1][j];
        return dp[squares.size()][n];
    }
};