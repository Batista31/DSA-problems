class MinStack {
    stack<int> st,s;
public:
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(s.empty() || val <= s.top())
    s.push(val);
    }
    
    void pop() {
        if(st.top() == s.top())
        s.pop();

    st.pop();
    }
    
    int top() {
        if(!st.empty()) return st.top();
        return 0;
    }
    
    int getMin() {
        return s.top();
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