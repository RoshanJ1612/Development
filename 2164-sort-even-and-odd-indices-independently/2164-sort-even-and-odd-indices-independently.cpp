class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums)
    {
        vector<int>even;
        vector<int>odd;
        for(int i = 0; i<nums.size();i++)
        {
            if(i % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        
        
     sort(even.begin(), even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        
        /*for(auto it:even)
        {
            cout<<it<<" ";
        }
           for(auto it:odd)
        {
            cout<<it<<" ";
        }*/
        int n = nums.size();
       nums.clear();
        int e = 0;
        int o = 0;
        for(int i = 0; i<n;i++)
        {
            if(i % 2 == 0)
            {
                nums.push_back(even[e]);
                e++;
            }
            else
            {
                nums.push_back(odd[o]);
                o++;
            }
        }
        
        return nums;
        
    }
};