class Solution {
    int countWord(const string &s){
        int words=1;//for last words or only single word is there
        for(const char &c:s){
            if(c==' ')//seperated by single space [not multiple]
                words++;
        }
        return words;
    }
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int> mp;//userName,wordCount
        int msz=messages.size();
        for(int i=0;i<msz;i++){
            mp[senders[i]]+=countWord(messages[i]);
        }
        
        string lrname;
        int max=INT_MIN;
        map<string,int>::iterator itr=mp.begin();//sorted via key[user name]
        while(itr!=mp.end()){
            if(itr->second>=max){//>= for lexicographically largest name
                lrname=itr->first;
                max=itr->second;
            }
            itr++;
        }
        return lrname;
    }
};