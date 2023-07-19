class Solution {
public:
   void dfs(vector<vector<int>>& visi, vector<vector<int>>& grid, int i, int j) {
    visi[i][j] = 1;
    grid[i][j] = 0;

    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    for (int k = 0; k < 4; k++) {
        int nrow = i + dx[k];
        int ncol = j + dy[k];
        if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && grid[nrow][ncol] == 1 && visi[nrow][ncol] == 0) {
            dfs(visi, grid, nrow, ncol);
        }
    }
}
    int numEnclaves(vector<vector<int>>& grid) {
        if(grid.size()==0) return 0;
        
        vector<vector<int>> visi(grid.size(),vector<int>(grid[0].size()));
                    for(int i = 0 ; i < grid.size() ; i++)
                                 {
                                     for(int j = 0 ; j < grid[0].size();j++)
                                     {
                                         if((i == 0 || j == 0 || i == grid.size()-1 || j ==grid[0].size()-1)&& visi[i][j]==0&&grid[i][j]==1)
                                         {
                                             grid[i][j] = 0;
                                              
                                             dfs(visi,grid,i,j);
}
}
}
                                 int ans = 0;
                                 for(int i = 0 ; i < grid.size() ; i++)
                                 {
                                     for(int j = 0 ; j < grid[0].size(); j++)
                                     {
                                         if(grid[i][j]==1) ans++;
                                     }
}
                                 return ans;
        
    }
};