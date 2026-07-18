class MyQueue {
public:
    stack<int>st ;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int>st2;
        while(!st.empty()){
            if(st.size() == 1){
                break;
            }
            int p = st.top(); 
            st2.push(p);
            st.pop();
        }
        int itr = st.top();
        st.pop();
        while(!st2.empty()){
            int tp = st2.top();
            st.push(tp);
            st2.pop();
        }
        return itr; 

    }
    
    int peek() {
        stack<int>st2;
        st2 = st;
        int last;
        while(!st2.empty()){
            last = st2.top();
            st2.pop();
        }
        return last;
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */