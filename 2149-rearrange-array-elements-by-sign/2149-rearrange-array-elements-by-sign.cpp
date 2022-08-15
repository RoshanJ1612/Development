class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums)
    {
                vector<int>n1;
        vector<int>n2;
        int c = nums.size();
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i] >= 0)
            {
                n1.push_back(nums[i]);
            }
            else if(nums[i] < 0)
            {
                n2.push_back(nums[i]);
            }
        }
        
        nums.clear();
        int j = 0;
        int k = 0;
        
        for(int i = 0; i<c;i++)
        {
            if(i % 2 == 0)
            {
                nums.push_back(n1[j]);
                j++;
            }
             else
            {
                nums.push_back(n2[k]);
                k++;
            }
        }
        

        return nums;   
    }
};