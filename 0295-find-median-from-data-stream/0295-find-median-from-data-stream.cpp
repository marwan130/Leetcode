class MedianFinder {
private:
    vector<double> medianFinder;
public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        auto pos = lower_bound(medianFinder.begin(), medianFinder.end(), num);
        medianFinder.insert(pos, num);
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