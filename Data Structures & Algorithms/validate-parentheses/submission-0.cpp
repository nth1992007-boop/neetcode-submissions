class Solution {
public:
    bool isValid(string s) {
        stack<char> openBrackets;

        for (char bracket : s) {
            if (bracket == '(' || bracket == '[' || bracket == '{') {
                openBrackets.push(bracket);
            } else {
                if (openBrackets.empty()) {
                    return false;
                }

                char topBracket = openBrackets.top();

                if (bracket == ')' && topBracket != '(') {
                    return false;
                }

                if (bracket == ']' && topBracket != '[') {
                    return false;
                }

                if (bracket == '}' && topBracket != '{') {
                    return false;
                }

                openBrackets.pop();
            }
        }

        return openBrackets.empty();
    }
};