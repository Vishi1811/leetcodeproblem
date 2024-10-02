class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp = arr;
        vector<int> ans(n);
        unordered_map<int, int> rank;

        sort(temp.begin(), temp.end());

        // Assign ranks to each unique element in sorted order
        int r = 1;
        for (int i = 0; i < n; i++) {
            if (i == 0 || temp[i] != temp[i - 1]) {
                rank[temp[i]] = r++;
            }
        }

        // Build the answer array using the ranks
        for (int i = 0; i < n; i++) {
            ans[i] = rank[arr[i]];
        }

        return ans;
    }
};