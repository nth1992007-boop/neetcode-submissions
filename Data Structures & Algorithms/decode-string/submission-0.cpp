class Solution {
public:
    string decodeString(string s) {
        stack<string> str_st;
        stack<int> num_st;

        int current_num = 0;
        string current_str = "";

        for(char c : s){
            if(isdigit(c)){
                current_num = current_num * 10 + (c - '0');
            }else if(c == '['){
                str_st.push(current_str);
                num_st.push(current_num);

                current_num = 0;
                current_str = "";
            }else if(c == ']'){
                int reps = num_st.top();
                num_st.pop();

                string pre = str_st.top();
                str_st.pop();

                string new_str = "";

                for(int i = 0; i < reps; i++){
                    new_str += current_str;
                }

                current_str = pre + new_str;
            }else{
            current_str += c;
            }
        }

        return current_str;
    }
};