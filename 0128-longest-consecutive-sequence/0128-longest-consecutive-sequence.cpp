class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;

        for (int n : nums) {
            if (mp.find(n) != mp.end()) continue;

            int left = mp.count(n - 1) ? mp[n - 1] : 0;
            int right = mp.count(n + 1) ? mp[n + 1] : 0;

            int sum = left + right + 1;
            mp[n] = sum; 

            res = max(res, sum);

            mp[n - left] = sum;
            mp[n + right] = sum;
        }

        return res;
    }
};