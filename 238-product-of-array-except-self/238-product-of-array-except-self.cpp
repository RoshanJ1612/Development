class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int>output;
          int product = 1;
    
    int zeroCount = 0;
    for (int num: nums) {
      if (num != 0) {
        product *= num;
      }
        else {
        zeroCount++;
      }

    }
    for (int i = 0; i < nums.size(); i++) {
      if (zeroCount > 1 || (zeroCount > 0 && nums[i] != 0))
        output.push_back(0);
      else if (zeroCount == 1)
        output.push_back(product);
      else
        output.push_back(product / nums[i]);
    }
        return output;
    }
};
        