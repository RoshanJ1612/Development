class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        if(n==0){return "";}
        else if(n==1){return s;}
        for(int i=2;i<=n;i++){
            s = output(s,n);
        }
        return s;
    }
    string output(string s,int n){
        string s1 = "";
        char prev = s[0];
        int count=1;
        for(int i=1;i<s.length();i++){
            if(prev == s[i]){
                count++;
            }
            else{
                s1 += to_string(count);
                count = 1;
                s1 += prev;
                prev = s[i];
            }
        }
            s1 += to_string(count);
            count = 1;
            s1 += prev;
        return s1;
    }
};