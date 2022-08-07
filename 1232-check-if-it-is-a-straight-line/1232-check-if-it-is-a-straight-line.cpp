class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c)
    {
         int x0= c[0][0];
        int y0 = c[0][1];
        
         int x1= c[1][0];
        int y1 = c[1][1];
        
        int dx = x1-x0,dy= y1-y0;
        
        bool flag = true;
        for (int i = 0; i < c.size(); i++)
        {
            int x = c[i][0], y = c[i][1];
           if(dx*(y-y1) != dy*(x-x1))
           {
               flag = false;
               break;
           }
        }
        return flag;
    }
};