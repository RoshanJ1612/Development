class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int>ans;
        double med = 0.0;
        
        for(int i = 0; i< nums1.size(); i++)
        {
            ans.push_back(nums1[i]);
        }
        
    
        for(int i = 0; i< nums2.size();i++)
        {
            ans.push_back(nums2[i]);
        }
        
        sort(ans.begin(),ans.end());
        
           
   int mid = ans.size()/2;
   if(ans.size() % 2 == 0)
   {
       double midValue = (ans[mid] + ans[mid - 1]);
       med = midValue/2;
       return med;
   }
   
   med = ans[mid];
   return med;
        
        
        
    }
};