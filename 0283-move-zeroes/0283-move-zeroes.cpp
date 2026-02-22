class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 1) {
            return;
        }

        int left = 0;

        for(int right = 1; right < nums.size(); right++) {
            if(nums[left] == 0) {
                if(nums[right] != 0) {
                    swap(nums[left], nums[right]);
                    left++;
                }
            }
            else {
                left++;
            }
        }
    }
};