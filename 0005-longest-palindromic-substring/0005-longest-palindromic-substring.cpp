class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int palLen = 0;

        for(int i = 0; i < s.size(); i++) {
            //odd
            int l = i, r = i;
            while(l >= 0 && r < s.size() && s[l] == s[r]) {
                if((r - l + 1) > palLen) {
                    res = s.substr(l, r - l + 1);
                    palLen = r - l + 1;
                }
                l--;
                r++;
            }

            //even
            l = i, r = i + 1;
            while(l >= 0 && r < s.size() && s[l] == s[r]) {
                if((r - l + 1) > palLen) {
                    res = s.substr(l, r - l + 1);
                    palLen = r - l + 1;
                }
                l--;
                r++;
            }
        }
        return res;
    }
};