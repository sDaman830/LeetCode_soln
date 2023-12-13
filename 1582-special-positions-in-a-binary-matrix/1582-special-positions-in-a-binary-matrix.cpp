class Solution {
public:
    bool check(int i, int j, vector<vector<int>>& mat) {
        for (int x = 0; x < mat[0].size(); x++) {
            if (mat[i][x] == 1 && x != j) {
                return false;
            }
        }
        for (int x = 0; x < mat.size(); x++) {
            if (mat[x][j] == 1 && x != i) {
                return false;
            }
        }
        return true;
    }

    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 1) {
                    if (check(i, j, mat)) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
