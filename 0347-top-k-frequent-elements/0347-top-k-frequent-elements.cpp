class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int most = 0;
        vector<int> res;

        for(int num : nums) {
            freq[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for(const auto& pair : freq) {
            bucket[pair.second].push_back(pair.first);
        }

        for(int i = nums.size(); i >= 0; i--) {
            for(int num : bucket[i]) {
                res.push_back(num);
            }

            if(res.size() == k) {
                return res;
            }
        }
        return res;
    }
};