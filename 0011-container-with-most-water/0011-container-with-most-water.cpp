class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxwater = 0;

        while(left < right) {
            int area = (right - left) * min(height[left], height[right]);
            maxwater = max(area, maxwater);

            if(height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return maxwater;
    }
};