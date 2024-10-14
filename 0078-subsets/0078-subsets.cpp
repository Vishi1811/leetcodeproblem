class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int N = 1 << n;  // 2^n possible subsets
        vector<vector<int>> ans;
        
        for (int i = 0; i < N; i++) {
            vector<int> subset;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j))  // Check if the j-th bit of i is set
                    subset.push_back(nums[j]);
            }
            ans.push_back(subset);
        }
        
        return ans;
    }
};