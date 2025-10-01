class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int empty = numBottles;

        while (empty >= numExchange) {
            int newBottles = empty / numExchange; // exchange
            ans += newBottles;                   // drink new bottles
            empty = empty % numExchange + newBottles; // leftovers + new empties
        }

        return ans;

        
    }
};