class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
    {
        int c = 0;
        for(int i = 0; i<arr1.size();i++)
        {
            for(int j = 0; j<arr2.size();j++)
            {
                int temp = arr1[i] - arr2[j];
                if(temp < 0)
                {
                    temp = -temp;
                }
                if(temp <=d)
                {
                    
                    c++;
                    break;
                }
            }
        }
        return arr1.size()-c;
    }
};