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

    int findLast(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, last = -1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] <= target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
            if(nums[mid] == target) {
                last = mid;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()) {
            return {-1, -1};
        }
        int first = findFirst(nums, target);
        int last = findLast(nums, target);

        return {first, last};
    }
};