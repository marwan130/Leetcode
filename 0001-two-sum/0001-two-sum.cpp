class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pass;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {
            pass[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++) {
            int findNum = target - nums[i];
            
            if(pass.find(findNum) != pass.end() && pass[findNum] != i) {
                return {pass[findNum], i};
            }

        }
        return {};
    }
};
   