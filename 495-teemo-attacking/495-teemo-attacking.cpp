class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) 
    {
      /*  int total = 0;
        int c = 1;
        for(int i = 0; i< t.size()-1;i++)
        {
            if(t[i+1]-t[i] < d)
            {
                total = total + (t[i+1]-t[i]);
            }
            else
            {
                c++;                         
            }
        }
        
        return (c*d + total);
    }*/
         int total = d, prev = t[0];
        for (int i = 1; i < t.size(); i++) {
            int curr = t[i];
            if (prev + d >= curr) //if the duration of poison overlaps with the previous poison duration
                total += (curr - prev);
            else
                total += d;
            prev = curr;
        }
        return total;
                                 
    }            
};