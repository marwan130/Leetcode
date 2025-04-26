class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<bool> inMST(n, false);
        vector<int> minDist(n, INT_MAX);
        minDist[0] = 0;
        int res = 0;

        for(int i = 0; i < n; i++) {
            int minimumPointer = -1;
            for(int v = 0; v < n; v++) {
                if(!inMST[v] && (minimumPointer == -1 || minDist[v] < minDist[minimumPointer])) {
                    minimumPointer = v;
                }
            }
            inMST[minimumPointer] = true;
            res += minDist[minimumPointer];

            for(int v = 0; v < n; v++) {
                int dist = abs(points[minimumPointer][0] - points[v][0]) + abs(points[minimumPointer][1] - points[v][1]);
                if(!inMST[v] && dist < minDist[v]) {
                    minDist[v] = dist;
                }
            }
        }
        return res;
    }
};