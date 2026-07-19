class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int a[26];

        for(char x : s){
            a[x - 'a']++;
        }

        for(char x : t){
            a[x - 'a']--;
        }

        for(int x : a){
            if(x != 0) return false;
        }

        return true;
    }
};
