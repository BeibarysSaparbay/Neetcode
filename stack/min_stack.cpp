class MinStack {
private:
    stack<int> stk;
    stack<int> stkMin;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(stkMin.empty())
            stkMin.push(val);
        else if(val<=stkMin.top())
            stkMin.push(val);
    }
    
    void pop() {
        if(!stk.empty()) {
            int top=stk.top();
            stk.pop();
            if(top==stkMin.top())
                stkMin.pop();
        }
    }
    
    int top() {
        int top=-1;
        if(!stk.empty())
            top=stk.top();
        return top;
    }
    
    int getMin() {
        if(!stkMin.empty())
            return stkMin.top();
        return -1;
    }
};
