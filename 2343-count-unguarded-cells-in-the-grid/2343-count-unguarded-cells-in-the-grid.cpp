class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        int grid[m][n];
        memset(grid, 0, sizeof(grid));
        for (auto& x : guards) {
            grid[x[0]][x[1]] = 2;
        }
        for (auto& w : walls) {
            grid[w[0]][w[1]] = 2;
        }
        int pos[5] = {-1, 0, 1, 0, -1};
        for (auto& it : guards) {
            for (int i = 0; i < 4; ++i) {
                int x = it[0], y = it[1];
                int a = pos[i], b = pos[i + 1];
                while (x + a >= 0 && x + a < m && y + b >= 0 && y + b < n && grid[x + a][y + b] < 2) {
                    x += a;
                    y += b;
                    grid[x][y] = 1;
                }
            }
        }
        int res = 0;
        for (auto& row : grid) {
            res += count(row, row + n, 0);
        }
        return res;
    }

};