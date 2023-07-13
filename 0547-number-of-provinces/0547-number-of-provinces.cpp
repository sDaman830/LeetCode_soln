class Solution {
public:
    void dfs(int i, vector<int> adj[], vector<int>& visi) {
        visi[i] = 1;
        for (auto k : adj[i]) {
            if (visi[k] == 0) {
                dfs(k, adj, visi);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int> adj[v];
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        vector<int> visi(v, 0);
        int cnt = 0;
        for (int i = 0; i < v; i++) {
            if (visi[i] == 0) {
                cnt++;
                dfs(i, adj, visi);
            }
        }
        
        return cnt;
    }
};
