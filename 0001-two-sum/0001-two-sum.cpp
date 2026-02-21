class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> list;

        for(int i = 0; i < nums.size(); i++) {
            int look_for = target - nums[i];

            if(list.contains(look_for)) {
                return {list[look_for], i};
            }
            
            list[nums[i]] = i;
        }
        return {};
    }
};
   