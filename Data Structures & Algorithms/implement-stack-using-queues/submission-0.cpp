class MyStack {
public:
    queue<int> q1; 
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int pope = q1.back();
        queue<int> q2;
        while(q1.size() > 1){
            q2.push(q1.front());
            q1.pop();
        }
        q1 = q2;
        return pope; 
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        if(q1.empty()) return true;
        else return false; 
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */