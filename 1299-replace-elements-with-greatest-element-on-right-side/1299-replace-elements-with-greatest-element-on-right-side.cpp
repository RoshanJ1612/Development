class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
       
        int i = 0;
          for( i = 0; i<arr.size()-1;i++)
          {
              
            auto max_it = std::max_element(arr.begin()+i+1, arr.end());
             arr[i] = *max_it;
          }
        arr[i] = -1;
        return arr;
    }
};