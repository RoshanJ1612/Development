class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> s;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                if (c != '.') {
                    string s1 = to_string(c - '0' + 1) + " exists in row " + to_string(i);
                    string s2 = to_string(c - '0' + 1) + " exists in column " + to_string(j);
                    string s3 = to_string(c - '0' + 1) + " exists in box " + to_string(i/3) + "-" + to_string(j/3);
                    if (s.find(s1) != s.end() || s.find(s2) != s.end() || s.find(s3) != s.end()) return false;
                    s.insert(s1);
                    s.insert(s2);
                    s.insert(s3);   
                }
            }
        }
        return true;
    }
};