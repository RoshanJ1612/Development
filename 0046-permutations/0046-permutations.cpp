class Solution 
{
private:
    void permuteBT(vector<int> &nums, vector<int> &ansi, vector<vector<int>> &ans, int bitmask, int count)
    {
        // Base case permutation store.
        if(count==nums.size())
        {
            ans.push_back(ansi);
        }
        
        for(int i=0; i<nums.size(); i++)
        {
            int mask=1&(bitmask>>i);
            if(mask==0)
            {
                // track
                ansi.push_back(nums[i]);
                bitmask|=(1<<i);
                
                permuteBT(nums,ansi,ans,bitmask, count+1);
                
                // backtrack
                bitmask&=~(1<<i);
                ansi.pop_back();
            }
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<int> ansi;
        vector<vector<int>> ans;
        
        int bitmask=0;
        int count=0;
        permuteBT(nums, ansi, ans, bitmask, count);
        
        return ans;
    }
};