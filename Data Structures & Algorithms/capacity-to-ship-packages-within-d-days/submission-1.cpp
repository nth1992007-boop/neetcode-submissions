class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());

        int right = 0;
        for (int weight : weights) {
            right += weight;
        }

        while(left < right){
            int mid = left + (right - left) / 2;

            int day = 0;
            int current_weight = 0;

            for(int i = 0; i < weights.size(); i++){
                current_weight += weights[i];
                if(i + 1 < weights.size() && current_weight + weights[i + 1] > mid){
                    day++;
                    current_weight = 0;
                }
            }

            if(current_weight != 0){
                day++;
            }

            if(day > days){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
        return right;
    }
};