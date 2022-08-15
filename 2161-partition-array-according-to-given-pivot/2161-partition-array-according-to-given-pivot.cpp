class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot)
    {
        vector<int>n1;
        vector<int>n2;
        int c = 0;
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i] < pivot)
            {
                n1.push_back(nums[i]);
            }
            else if(nums[i] > pivot)
            {
                n2.push_back(nums[i]);
            }
            else if(nums[i] == pivot)
            {
                c++;
            }
        }
        nums.clear();
        
        for(int i = 0; i<n1.size();i++)
        {
            nums.push_back(n1[i]);
        }
        
           for(int i = 0; i<c;i++)
                nums.push_back(pivot);
         for(int i = 0; i<n2.size();i++)
        {
            nums.push_back(n2[i]);
        }
        return nums;
        
    }
};