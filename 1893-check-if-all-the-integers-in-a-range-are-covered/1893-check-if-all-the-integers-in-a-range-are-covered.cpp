class Solution {
public:
 bool isCovered(vector<vector<int>>& ranges, int L , int R ) {
        unordered_set<int>st;
        for( auto x : ranges )
            for( int i = x[0] ; i <= x[1] ; i++ )
                st.insert(i);

        for( int i = L ; i <= R ; i++ )
            if(st.count(i)==0)
                return 0;
        return 1;
    }
        
};