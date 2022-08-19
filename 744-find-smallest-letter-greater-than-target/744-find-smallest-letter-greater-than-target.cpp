class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        sort(letters.begin(),letters.end());
        char ans = letters[0];
        
        for(int i = 0; i<letters.size();i++)
        {
            if(target < letters[i])
            {
                ans = letters[i];
                break;
            }
        }
        return ans;
    }
};