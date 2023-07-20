class Solution {
public:
    bool bfs(vector<vector<int>> & graph , vector<int> &visi , int prev , int index)
    {
        visi[index] = prev;
       queue<pair<int,int>> q;
        q.push({index , prev});
        while(!q.empty())
        {
            int node = q.front().first;
            int p = q.front().second;
            q.pop();
            for(auto i : graph[node])
            {
                if(visi[i] == -1)
                {
                    q.push({i,!p});
                    visi[i] = !p;
}
                else
                {
                    if(p == visi[i]) return false;
                }
}
}
        return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> visi(graph.size(),-1);
        for(int i = 0 ; i < n ; i++)
        {
            if(visi[i] == -1)
            {
             bool ans =   bfs(graph , visi , 0,i);
                if(ans == false) return false;
            }
}
        return true;
    }
};