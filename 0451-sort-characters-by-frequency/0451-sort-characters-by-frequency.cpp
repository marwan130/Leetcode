class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for(char c : s) {
            freq[c]++;
        }

        vector<vector<char>> bucket(s.size() + 1);

        for(const auto& pair : freq) {
            bucket[pair.second].push_back(pair.first);
        }

        string res = "";

        for(int i = s.size(); i >= 0; i--) {
            for(char c : bucket[i]) {
                res += string(i, c);
            }
        }
        return res;
    }
};