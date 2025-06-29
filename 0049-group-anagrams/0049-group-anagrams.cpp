class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> comp;
        for(string s : strs) {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            comp[sorted].push_back(s);
        }

        for(const auto& pair : comp) {
            res.push_back(pair.second);
        }
        return res;
    }
};