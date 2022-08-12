class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        bool ans = false; 
        int n = matrix[0].size()-1;
        for(int i = 0;i< matrix.size();i++)
            
        {
                 if(target > matrix[i][n])
                {
                    continue;
                }
            for(int j = 0;j<matrix[0].size();j++)
            {
              
                if(matrix[i][j] == target)
                {
                    ans = true;
                    break;
                }
                
            }
        }
        return ans;
    }
};