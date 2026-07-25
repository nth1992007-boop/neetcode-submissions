class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        for(char x : s){
            if(x == '(' || x == '[' || x == '{'){
                open.push(x);
            }else{
                if(open.empty()){
                    return false;
                }
                
                char top = open.top();

                if(x == ')' && top != '('){
                    return false;
                }

                if(x == ']' && top != '['){
                    return false;
                }

                if(x == '}' && top != '{'){
                    return false;
                }

                open.pop();
            }
        }
        return open.empty();
    }
};