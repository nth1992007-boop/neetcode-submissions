class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;

        for (string operation : operations) {
            if (operation == "+") {
                int n = scores.size();

                scores.push_back(
                    scores[n - 1] + scores[n - 2]
                );
            } 
            else if (operation == "D") {
                scores.push_back(scores.back() * 2);
            } 
            else if (operation == "C") {
                scores.pop_back();
            } 
            else {
                scores.push_back(stoi(operation));
            }
        }

        int total = 0;

        for (int score : scores) {
            total += score;
        }

        return total;
    }
};