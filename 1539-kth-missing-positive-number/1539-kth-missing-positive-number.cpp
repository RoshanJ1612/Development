class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
   
        int i = 0, n = 0;
        while(k!=0)
        {
            n++;
            if(i != arr.size() && arr[i] == n) i++;
            else k--;
             
        }
        return n;
    }
};

/*
     vector<int> v;
        int i = 0, n = 1;
        while(v.size() < k){
            if(i != arr.size() && arr[i] == n) i++;
            else v.push_back(n);
            n++;
        }
        return v[k-1];
        
*/