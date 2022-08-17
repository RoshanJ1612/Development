class Solution {
public:
    string greatestLetter(string s) {
        vector<int> letters(26, 0);
        int size = s.size();
   
        
        for(int i = 0; i < size; i++){
            if(s[i] <= 'Z'){                        
                if(letters[s[i] - 'A'] == 0)
                    letters[s[i] - 'A'] = 1;
                else if(letters[s[i] - 'A'] == 2)
                    letters[s[i] - 'A'] = 3;
            }
            else{                                     
                if(letters[s[i] - 'a'] == 0)
                    letters[s[i] - 'a'] = 2;
                else if(letters[s[i] - 'a'] == 1)
                    letters[s[i] - 'a'] = 3;
            }
        }
        
       
        
        string res = "";
        
        for(int i = 25; i >= 0; i--){
            if(letters[i] == 3){
                res += char('A'+i);
                break;
            }
        }
        
        return res;
    }
};