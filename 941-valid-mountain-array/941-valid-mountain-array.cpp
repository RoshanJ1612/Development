class Solution {
public:
    bool validMountainArray(vector<int>& arr)
    {
        if(arr.size() == 1)
        {
            return false;
        }
        int i = 0,j = 0;
        for(i = 0;i<arr.size();i++)
        {
            if(arr[i]>=arr[i+1])
            {
                break;
            }
        }
        cout<<i<<endl;
        if(i == arr.size()-1)
        {
            return false;
        }
        for(j = arr.size()-1;j>1;j--)
        {
             if(arr[j]>=arr[j-1])
            {
                break;
            }
        }
        
        if(j == 0)
        {
            return false;
        }
        
        if(i == j)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};