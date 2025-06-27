class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int, pair<int, int>> freq;
        int maximum = 0;
        int i = 0;
        int count = 0;

        while(i < s.size()) {
            char c = s[i];
            if(freq[c].first == 0) {
                freq[c] = {1, i};
                count++;
                maximum = max(maximum, count);
                i++;
            }
            else {
                i = freq[c].second + 1;
                freq.clear();
                count = 0;
            }
        }
        return maximum;

    }
};