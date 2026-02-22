class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> map1;
        unordered_map<char, int> map2;

        for(char ch : s) {
            map1[ch]++;
        }

        for(char ch : t) {
            map2[ch]++;
        }
        return map1 == map2;
    }
};
