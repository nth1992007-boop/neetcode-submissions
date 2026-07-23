class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }

        vector<int> s1_count(26, 0);
        vector<int> count(26, 0);

        for(int i = 0; i < s1.size(); i++){
            s1_count[s1[i] - 'a']++;
            count[s2[i] - 'a']++;
        }

        if(s1_count == count) return true;

        for(int right = s1.size(); right < s2.size(); right++){
            count[s2[right] - 'a']++;
            count[s2[right - s1.size()] - 'a']--;

            if(s1_count == count) return true;
        }

        return false;
    }
};
