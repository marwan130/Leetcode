class Solution {
public:
    int findFirst(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, first = -1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] >= target) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
            if(nums[mid] == target) {
                first = mid;
            }
        }
        return first;
    }

    int findSecond(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, second = -1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] <= target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
            if(nums[mid] == target) {
                second = mid;
            }
        }
        return second;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()) {
            return {-1, -1};
        }
        else {
        int first = findFirst(nums, target);
        int second = findSecond(nums, target);
        
        return {first, second};
        }

    }
};