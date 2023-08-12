class Solution {
public:
 int solve(int i,int j,int m,int n, vector<vector<int>>&dp,vector<vector<int>> &g)
    {
        if(i>m-1|| j>n-1|| g[i][j]==1) return 0;
        if(i == m-1 && j == n-1) return 1;
        if(dp[i][j]  != -1) return dp[i][j];;
        return dp[i][j] = solve(i,j+1,m,n,dp,g) + solve(i+1,j,m,n,dp,g);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
          
       
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
         vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return solve(0,0,m,n,dp,obstacleGrid);
    }
};