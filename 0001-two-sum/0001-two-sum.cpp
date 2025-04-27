class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        for(int i=0; i<nums.size(); i++) {
            int look_for = target - nums[i];
            auto it = map.find(look_for);
            if(it != map.end()) {
                return {it->second, i};
            }
            map.insert({nums[i], i});
        }
        return {};
    }
};
   