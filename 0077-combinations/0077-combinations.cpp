class Solution {
public:
    vector<vector<int>> result;
    vector<int> temp;
    vector<vector<int>> combine(int n, int k) {
        backtrack(n, 0, k);
        return result;
    }

    void backtrack(int n, int idx, int k){
        if (temp.size() == k){
            result.push_back(temp);
        }
        for(int i = idx; i < n; i++){
            temp.push_back(i+1);
            backtrack(n, i+1, k);
            temp.pop_back();
        }
    }
};