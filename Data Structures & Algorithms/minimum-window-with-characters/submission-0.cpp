class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size()) return "";
        int left = 0;
        int formed = 0;
        int min_length = INT_MAX;
        int start_index = 0;

        unordered_map<char, int> need;
        unordered_map<char, int> current;

        for(char c : t){
            need[c]++;
        }

        int need_char = need.size();

        for(int right = 0; right < s.size(); right++){
            char right_char = s[right];

            current[right_char]++;

            if(need[right_char] == current[right_char]) formed++;

            while(formed == need_char){
                int length = right - left + 1;

                if(min_length > length){
                    min_length = length;
                    start_index = left;
                }

                char left_char = s[left];
                current[left_char]--;

                if(current[left_char] < need[left_char]){
                    formed--;
                }
                left++;
            }
        }
        if(min_length == INT_MAX) return "";

        return s.substr(start_index, min_length);
    }
};
