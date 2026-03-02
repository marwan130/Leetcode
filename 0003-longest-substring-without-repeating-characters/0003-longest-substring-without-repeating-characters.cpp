class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0, left = 0;
        unordered_map<int, int> freq;

        for(int right = 0; right < s.size(); right++) {
            freq[s[right]]++;

            while(freq[s[right]] > 1) {
                freq[s[left]]--;
                left++;
            }

            longest = max(longest, (right - left + 1));
        }
        return longest;
    }
};