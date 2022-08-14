class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        vector<int> v(arr); //copy of arr
        sort(v.begin(),v.end());
        map<int,int> mp;
        int b=1; //for rank
        for(int i=0; i<v.size();i++) {
            if(mp.find(v[i])==mp.end()) 
            {
             mp[v[i]] = b;
                b++;
            }
        }
        for(int i=0; i<arr.size(); i++) {
            arr[i] = ((*mp.find(arr[i])).second);
        }
        return arr;
    }
};