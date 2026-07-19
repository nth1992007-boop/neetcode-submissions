class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        for(int i = 0; i < strs[0].size(); i++){
            char current = strs[0][i];

            for(int j = 1; j < strs.size(); j++){
                if(strs[j][i] != current || i >= strs[j].size()){
                    return ans;
                }
            }

            ans += strs[0][i];
        }
        return ans;
    }
};