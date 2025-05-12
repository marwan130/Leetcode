class Solution {
public:
    int merge(vector<int>& nums, int left, int mid, int right) {
    int count = 0;
    int j = mid + 1;

    for (int i = left; i <= mid; i++) {
        while (j <= right && (long long)nums[i] > 2LL * nums[j]) {
            j++;
        }
        count += (j - (mid + 1));
    }

    vector<int> temp;
    int i = left;
    j = mid + 1;
    while (i <= mid && j <= right) {
        if (nums[i] <= nums[j]) {
            temp.push_back(nums[i++]);
        } else {
            temp.push_back(nums[j++]);
        }
    }
    while (i <= mid) temp.push_back(nums[i++]);
    while (j <= right) temp.push_back(nums[j++]);

    for (int i = 0; i < temp.size(); i++) {
        nums[left + i] = temp[i];
    }

    return count;
    
    }

    int mergeSort(vector<int>& nums, int left, int right) {
       int count = 0;
        if(left < right) {
            int mid = left + (right - left) / 2;
            count += mergeSort(nums, left, mid);
            count += mergeSort(nums, mid + 1, right);
            count += merge(nums, left, mid, right);
        }
        return count;
    }

    int reversePairs(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        return mergeSort(nums, left, right);
    }
};