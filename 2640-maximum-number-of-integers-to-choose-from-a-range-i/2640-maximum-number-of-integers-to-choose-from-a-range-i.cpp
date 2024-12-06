class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
         unordered_set<int> bannedNumbers(banned.begin(), banned.end());

        int answer = 0;
        int currentSum = 0;
        for (int i = 1; i <= n && currentSum + i <= maxSum; ++i) {
           
            if (!bannedNumbers.count(i)) {
                ++answer;
                currentSum += i;
            }
        }
       
        return answer;
    }
};