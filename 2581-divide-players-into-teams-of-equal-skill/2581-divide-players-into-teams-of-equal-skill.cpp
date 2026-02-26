class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long n = skill.size();
        long long teams = n / 2;
        long long total_skill = 0;
        unordered_map<int, int> freq;

        for(int s : skill) {
            total_skill += s;
            freq[s]++;
        }

        if(total_skill % teams != 0) {
            return -1;
        }

        long long target = total_skill / teams;
        long long total_chemistry = 0;

        for(int s : skill) {
            if(freq[s] == 0) {
                continue;
            }

            freq[s]--;
            int complement = target - s;

            if(freq[complement] > 0) {
                freq[complement]--;
                total_chemistry = total_chemistry + s * complement;
            }
            else {
                return - 1;
            }
        }
        return total_chemistry;

    }
};