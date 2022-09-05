class Solution {
public:
    int calPoints(vector<string>& ops)
    {
        vector<int>ans;
        
        for(int i = 0; i<ops.size();i++)
        {
          
             if(ops[i] == "C")
            {
                ans.pop_back();
            }
            else if(ops[i] == "+")
            {
                int a = ans.size()-1;
                int sum = ans[a] + ans[a-1];
                ans.push_back(sum);
            }
            else if(ops[i] == "D")
            {
                  int a = ans.size()-1;
                int sum = 2 * ans[a];
                ans.push_back(sum);
            }
            else
            {
                 int val = stoi(ops[i]);
                ans.push_back(val);
            }
        }
        
        return accumulate(ans.begin(),ans.end(),0);
    }
};