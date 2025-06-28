class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> freq;
        int maxlen = 0;
        int left = 0;

        for(int right = 0; right < s.size(); right++) {
            while(freq.find(s[right]) != freq.end()) {
                freq.erase(s[left]);
                left++;
            }
            freq[s[right]]++;
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};