class FreqStack {
private:
    unordered_map<int, int> frequency;

    unordered_map<int, stack<int>> check;

    int max_fre;
public:
    FreqStack() {
        max_fre = 0;
    }
    
    void push(int val) {
        frequency[val]++;

        check[frequency[val]].push(val);

        max_fre = max(frequency[val], max_fre);
    }
    
    int pop() {
        int num = check[max_fre].top();
        check[max_fre].pop();

        frequency[num]--;

        if(check[max_fre].empty()){
            max_fre--;
        }

        return num;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */