class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        int res = 0;

        for(int num : nums) {
            if(mp.contains(num)) {
                continue;
            }

            int left = mp.count(num - 1) ?  mp[num - 1] : 0;
            int right = mp.count(num + 1) ? mp[num + 1] : 0;

            int sum = left + right + 1;
            mp[num] = sum;
            res = max(res, sum);

            mp[num - left] = sum;
            mp[num + right] = sum;
        }
        return res;
    }
};