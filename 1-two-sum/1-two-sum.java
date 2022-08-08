class Solution {
    public int[] twoSum(int[] arr, int target)
    {
        int ans[] = new int[2];
        int i = 0, j = 0;
        for( i = 0; i< arr.length; i++)
        {
            
            for( j = 0;j<arr.length;j++)
            {
                if(i != j)
                {
                   
                
                    if(arr[i] + arr[j] == target)
                    {
                        ans[0] = i;
                        ans[1] = j;
                        break;
                    }
                }
        }}
        return ans;
        

}}