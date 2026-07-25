class MyQueue {
private:
    stack<int> input;
    stack<int> output;

    void dodo(){
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
    }
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        dodo();

        int top_o = output.top();
        output.pop();

        return top_o; 
    }
    
    int peek() {
        dodo();
        return output.top();
    }
    
    bool empty() {
        dodo();
        return output.empty();
    }
};