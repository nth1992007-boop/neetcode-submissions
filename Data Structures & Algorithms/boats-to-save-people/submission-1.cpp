class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans = 0;

        sort(people.begin(), people.end());

        int left = 0;
        int right = people.size() - 1;

        while(left <= right){
            int weight = people[right] + people[left];

            if(weight <= limit){
                ans++;
                left++; right--;
            }else{
                ans++;
                right--;
            }
        }
        return ans;
    }
};