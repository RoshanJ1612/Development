class Solution {
public:
    void wiggleSort(vector<int>& nums) 
    {
      int n = nums.size();
        sort(nums.begin(),nums.end());  // sort the array first
        
        vector<int> temp(n); // creating a temporary array of size n
        int i = 1, j = n-1;  // initializing the pointers
		// in the while loop placing the elements in temp such that nums[i-1]<nums[i]>nums[i+1]
        while(i <nums.size()){
            temp[i] = nums[j];
            i+=2;
            j--;
        }
        i = 0;
        while(i<nums.size()){
            temp[i] = nums[j];
            i+=2;
            j--;
        }
		//copying back elements in nums
        for(int it =0; it<n;it++){
            nums[it] = temp[it];
        }
    }
        
           
        
    
};