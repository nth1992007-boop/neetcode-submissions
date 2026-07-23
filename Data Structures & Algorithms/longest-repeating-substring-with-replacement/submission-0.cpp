class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 1;
        int left = 0;
        int maxf = 0;
        unordered_map <char, int> frequently;

        for(int right = 0; right < s.size(); right++){
            int string_length = right - left + 1;
            frequently[s[right]]++;
            maxf = max(maxf, frequently[s[right]]);

            while(string_length - maxf > k){
                frequently[s[left]]--;
                left++;
                string_length = right - left + 1;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
