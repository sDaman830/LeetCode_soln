class Solution {
public:
  void bb(vector<vector<int>>& grid, vector<vector<int>>& visi, int n) {
    queue<pair<int, int>> q;
    q.push({0, 0});
    visi[0][0] = 1; // Initialize the starting cell with 1 instead of 0

    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++) {
            int nr = row + dr[i];
            int nc = col + dc[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < n && grid[nr][nc] == 0 && visi[nr][nc] == INT_MAX) {
                visi[nr][nc] = visi[row][col] + 1;
                q.push({nr, nc});
            }
        }
    }
    return;
}

int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    int n = grid.size();
    if (grid[0][0] != 0 || grid[n - 1][n - 1] != 0) return -1; // Check if the starting or destination cell is blocked

    vector<vector<int>> visi(n, vector<int>(n, INT_MAX));
    bb(grid, visi, n);

    if (visi[n - 1][n - 1] == INT_MAX) return -1; // Check if destination is unreachable
    else return visi[n - 1][n - 1];
}
};