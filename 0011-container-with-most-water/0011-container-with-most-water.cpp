class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int maxArea = 0;
        int right = height.size() - 1;

        while(left < right) {
            int area = (right - left) * min(height[right], height[left]);
            maxArea = max(maxArea, area);

            if(height[right] < height[left]) {
                right--;
            }

            else {
                left++;
            }
        }
        return maxArea;
    }
};