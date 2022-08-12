class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix)
    {
        bool ans = true;
        for(int i = 1;i<matrix.size();i++)
        {
            for(int j = 1;j <matrix[0].size();j++)
            {
                    if(matrix[i][j] != matrix[i-1][j-1])
                    {
                        ans = false;
                        break;
                    }
             }
             
        if(ans == false)
            {
               break;
            }
    }
        return ans;
    }
};