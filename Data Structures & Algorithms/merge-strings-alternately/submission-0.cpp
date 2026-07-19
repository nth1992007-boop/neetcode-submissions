class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 1;

        for(char x : word2){
            if(i < word1.size()){
                word1.insert(i, 1, x);
            }else{
                word1 += x;
            }
            
            i += 2;
        }

        return word1;
    }
};