class MinStack {
public:
    stack<int> n;
    stack<int> min;
    MinStack() { 
        
    }
    
    void push(int value) {
        n.push(value);
        if(min.empty() || value <= min.top()){
            min.push(value);
        }
    }
    
    void pop() {
        if (n.top() == min.top()) {
            min.pop();
        }

        n.pop();
    }
    
    int top() {
       return n.top(); 
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */