class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size()) {
            return false;
        }

        unordered_map<char, int> ransom;
        unordered_map<char, int> maga;

        for(char c : ransomNote) {
            ransom[c]++;
        }

        for(char c : magazine) {
            maga[c]++;
        }

        for(char c : ransomNote) {
            if(ransom[c] > maga[c]) {
                return false;
            }
        }
        return true;
    }
};