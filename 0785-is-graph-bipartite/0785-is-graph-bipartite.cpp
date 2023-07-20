class Solution {
public:
    bool dfs(vector<vector<int>>& graph, vector<int>& visi, int prev, int index) {
        visi[index] = prev;
        
        for (auto i : graph[index]) {
            if (visi[i] == -1) {
                if (!dfs(graph, visi, !prev, i))
                    return false;
            } else if (visi[i] == prev) {
                return false;
            }
        }
        
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> visi(n, -1);
        
        for (int i = 0; i < n; i++) {
            if (visi[i] == -1) {
                if (!dfs(graph, visi, 0, i))
                    return false;
            }
        }
        
        return true;
    }
};
