class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long sum = 0;
        int n = skill.size();
        for (int i = 0; i < n; i++) {
            sum += skill[i];
        }
        
        long long l = n / 2;
        
        // Check if it's possible to split players into pairs with the same sum
        if (sum % l != 0) return -1;
        
        long long x = sum / l;
        map<int, int> mp;
        long long ans = 0;
        
        for (int i = 0; i < n; i++) {
            if (mp.find(x - skill[i]) != mp.end()) {
                ans += ((x - skill[i]) * skill[i]);
                mp[x - skill[i]]--;
                if (mp[x - skill[i]] == 0) {
                    mp.erase(x - skill[i]);
                }
            } else {
                mp[skill[i]]++;
            }
        }
        
        // If not all players are paired
        if (mp.size() != 0) return -1;
        
        return ans;
    }
};