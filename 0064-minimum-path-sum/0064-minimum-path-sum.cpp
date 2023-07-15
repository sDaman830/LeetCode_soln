class Solution {
public:

    int minPathSum(vector<vector<int>>& grid) {
    if (grid.empty()) {
        return 0;
    }

    int rows = grid.size();
    int cols = grid[0].size();

    queue<pair<int, int>> q;
    q.push({0, 0});

    vector<vector<int>> minSum(rows, vector<int>(cols, INT_MAX));
    minSum[0][0] = grid[0][0];

    int dr[] = {0, 1}; // right, down
    int dc[] = {1, 0};

    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for (int i = 0; i < 2; i++) {
            int newRow = row + dr[i];
            int newCol = col + dc[i];

            if (newRow < rows && newCol < cols) {
                int newSum = minSum[row][col] + grid[newRow][newCol];
                if (newSum < minSum[newRow][newCol]) {
                    minSum[newRow][newCol] = newSum;
                    q.push({newRow, newCol});
                }
            }
        }
    }

    return minSum[rows - 1][cols - 1];
    }
};