class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for(int current : asteroids){
            bool destroyed = false;

            while(!st.empty() && st.back() > 0 && current < 0){
                if(st.back() > abs(current)){
                    destroyed = true;
                    break;
                }else if(st.back() < abs(current)){
                    st.pop_back();
                }else{
                    st.pop_back();
                    destroyed = true;
                    break;
                }
            }

            if(!destroyed){
                st.push_back(current);
            }
        }
        return st;
    }
};