class Solution {
public:
     vector<pair<int, int>> move(string s) {
        vector<pair<int, int>> res;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'L')
                res.push_back({1, i});
            else if (s[i] == 'R')
                res.push_back({2, i});
        }
        return res;
    }
    bool canChange(string start, string target) {
        auto a = move(start);
        auto b = move(target);
        if (a.size() != b.size()) return false;
        for (int i = 0; i < a.size(); ++i) {
            auto x = a[i], y = b[i];
            if (x.first != y.first) return false;
            if (x.first == 1 && x.second < y.second) return false;
            if (x.first == 2 && x.second > y.second) return false;
        }
        return true;

    }
};