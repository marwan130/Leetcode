class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        for(int num : nums) {
            map[num]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;

        for(auto& [num, freq] : map) {
            minHeap.emplace(freq, num);
            if(minHeap.size() > k) {
                minHeap.pop();
            }
        }
        vector<int> res;
        while(!minHeap.empty()) {
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return res;
    }
};