class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for(char c : s) {
            freq[c]++;
        }

        vector<pair<char, int>> vec(freq.begin(), freq.end());

        int n = vec.size();
        int max_ptr;
        for(int i = 0; i < n; i++) {
            max_ptr = i;
            for(int j = i + 1; j < n; j++) {
                if(vec[j].second > vec[max_ptr].second) {
                    max_ptr = j;
                }
            }
            swap(vec[i], vec[max_ptr]);
        }

        string res;
        for(auto& p : vec) {
            res.append(p.second, p.first);
        }
        
        return res;
    }
};