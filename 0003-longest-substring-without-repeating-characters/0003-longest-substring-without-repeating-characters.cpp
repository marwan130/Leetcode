class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> freq;
        int left = 0;
        int maximum = 0;
        for(int right = 0; right < s.size(); right++) {
            while(freq[s[right]] > 0) {
                freq[s[left]]--;
                left++;
            }
            freq[s[right]]++;
            maximum = max(maximum, right - left + 1);
        }

        return maximum;

    }
};