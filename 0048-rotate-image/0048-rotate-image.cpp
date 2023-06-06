class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
        vector<vector<int>> a(n,vector<int>(n,0));
        int y = 0;
        int x = n-1;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                a[i][j] = matrix[x][y];
                x--;
}
            x = n-1;
            y++;
        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                matrix[i,j] = a[i,j];
}
        }
        
    }
};