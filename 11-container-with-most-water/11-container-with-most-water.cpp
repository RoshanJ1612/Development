class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int max_volume = 0;
        while (left < right) {
            int volume = (right - left) * min(height[left], height[right]);
            if (volume > max_volume)
                max_volume = volume;
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return max_volume;
    }
};