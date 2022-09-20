class Solution {
public:
    int arithmeticTriplets(vector<int>& A, int diff) {
        int n = A.size();
        
        int i = 0 , k = n-1 ;
        int cnt = 0;
        for(int i =0 ; i < n ; i++){
            for (int j = i + 1 ;j < n ; j++)
                for (int k = j + 1 ; k < n ; k++){
                    // cout<< i << "   "<< j << "   "<<k <<endl;
                    // cout << A[j] - A[i] << "   "<<A[k] - A[j]<<endl;
                    if (A[j] - A[i] == diff && A[k] - A[j] ==diff)
                        cnt++;
                }
        }
        return cnt;
        
    }
};