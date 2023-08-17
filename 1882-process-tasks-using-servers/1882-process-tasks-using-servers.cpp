class Solution {
public:
    vector<int> assignTasks(vector<int>& srvs, vector<int>& tsks) {
        int n = srvs.size();
        int m = tsks.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> fs_pq;
       
        priority_queue<pair<long, long>, vector<pair<long, long>>, greater<pair<long, long>>> bs_pq;
        vector<int> ans(m);
        
        for (int i = 0; i < n; ++i) {
            fs_pq.push({srvs[i], i});
        }
        
        long time = 0;
        for (int i = 0; i < m; ++i) {
            time = max(static_cast<long>(i), time);
            if (fs_pq.empty() && bs_pq.top().first > time) {
                time = bs_pq.top().first;
            }
            
            while (!bs_pq.empty() && bs_pq.top().first <= time) {
                auto &info = bs_pq.top();
                int srv_idx = static_cast<int>(info.second);
                fs_pq.push({srvs[srv_idx], srv_idx});
                bs_pq.pop();
            }
            
            auto &info = fs_pq.top();
            bs_pq.push({time + tsks[i], info.second});
            ans[i] = info.second;
            fs_pq.pop();
        }
        
        return ans;
    }
};
