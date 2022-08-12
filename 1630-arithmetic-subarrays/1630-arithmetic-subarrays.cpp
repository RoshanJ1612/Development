class Solution {
public:
    
      bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        bool ans = true; 
        int diff = arr[1] - arr[0];
        for(int i = 0; i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i] != diff)
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r)
    {
        vector<bool>ans;
        vector<int>sample;
        for(int i = 0, j = 0; i <l.size() && j <r.size();i++,j++)
        {
            for(int k = l[i];k <=r[j];k++)
            {
                sample.push_back(nums[k]);
            }
            bool flag = canMakeArithmeticProgression(sample);
            ans.push_back(flag);
            sample.clear();
        }
        
        return ans;
        
    }
};