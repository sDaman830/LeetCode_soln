class Solution {
public:
int dp[501][501];
int f(vector<pair<int,int>>&c,int n,int i,int j){

    if(j <= 0){
        return 0;
    }
    if(i >= n){
        return 1e9;
    }
    if(dp[i][j] != -1)return dp[i][j];
    return dp[i][j] = min(c[i].first + f(c,n,i+1,j-c[i].second-1), f(c,n,i+1,j));
  

}
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();
        memset(dp,-1,sizeof(dp));
        vector<pair<int,int>>c(n);
        for(int i = 0;i < n;i++){
            c[i] = {cost[i],time[i]};
        }
        return f(c,n,0,n);
    }
};