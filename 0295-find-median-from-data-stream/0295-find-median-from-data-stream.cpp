class MedianFinder {
private:
    vector<double> medianFinder;
public:
    MedianFinder() {
    }

    int findPosition(vector<double>& arr, int num) {
        int left = 0, right = arr.size();
        while(left < right) {
            int medium = left + (right - left) / 2;
            if(arr[medium] < num) {
                left = medium + 1;
            }
            else {
                right = medium;
            }
        }
        return left;
    }
    
    void addNum(int num) {
        int pos = findPosition(medianFinder, num);
        medianFinder.insert(medianFinder.begin() + pos, num);
    }
    
    double findMedian() {
        int n = medianFinder.size();
        if(n % 2 == 0) {
            double i1 = n / 2;
            double i2 = i1 - 1;
            double median = (medianFinder[i1] + medianFinder[i2]) / 2;
            return median;
        }
        else {
            double median = medianFinder[n / 2];
            return median;
        }
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */