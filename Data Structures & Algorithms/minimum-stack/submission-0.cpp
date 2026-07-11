class MinStack {
private:
    stack<int> *st; 

public:
    MinStack() {
        st = new stack<int>; 
    }
    
    void push(int val) {
        st->push(val);
    }
    
    void pop() {
        st->pop();
    }
    
    int top() {
        return st->top();
    }
    
    int getMin() {
        stack<int>st1 = *st;
       int minN = INT_MAX; 
       while(st1.empty()!= 1) {
        if(st1.top() <= minN){
            minN = st1.top();
        }
        st1.pop();
       }
       return minN; 
    }
};
