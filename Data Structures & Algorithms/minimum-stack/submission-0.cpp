class MinStack {
private:
    stack<int> st;
    stack<int> st_min;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);

        if(st_min.empty()){
            st_min.push(val);
        }else{
            st_min.push(min(val, st_min.top()));
        }
    }
    
    void pop() {
        st.pop();
        st_min.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st_min.top();
    }
};
