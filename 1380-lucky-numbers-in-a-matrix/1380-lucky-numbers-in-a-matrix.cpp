class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) 
    {
       vector<int>ln;
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0;i<m;i++){
		//finding minimum in ith row
            int minRow=matrix[i][0];
            int index=0;
            for(int j=1;j<n;j++){
               if(matrix[i][j]<minRow){
                   minRow=matrix[i][j];
                   index=j;
               }
            } 
			//checking is it maximum in that column or not
          bool flag=true;
          for(int j=0;j<m;j++)
              if(minRow<matrix[j][index])
                  flag=false;
		//if it is then push-back
         if(flag) 
             ln.push_back(minRow);
      }
    return ln;
    }
};