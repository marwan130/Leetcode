class MinStack {
private: 
    vector<int> data;
    vector<int> minStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        data.push_back(val);

        if(minStack.empty() || val <= minStack.back()) {
            minStack.push_back(val);
        }
        else {
            minStack.push_back(minStack.back());
        }
    }
    
    void pop() {
        if(!data.empty()) {
            data.pop_back();
            minStack.pop_back();
        }
    }
    
    int top() {
        if(!data.empty()) {
            return data.back();
        }
        return -1;
    }
    
    int getMin() {
        if(!minStack.empty()) {
            return minStack.back();
        }
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */