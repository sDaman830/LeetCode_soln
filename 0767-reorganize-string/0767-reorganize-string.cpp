class Solution {
public:
    string reorganizeString(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                pq.push({freq[i], 'a' + i});
            }
        }
        
        string ans = "";
        while (pq.size() >= 2) {
            auto mostFreq = pq.top(); pq.pop();
            auto secondFreq = pq.top(); pq.pop();
            
            ans += mostFreq.second;
            ans += secondFreq.second;
            
            if (--mostFreq.first > 0) {
                pq.push(mostFreq);
            }
            if (--secondFreq.first > 0) {
                pq.push(secondFreq);
            }
        }
        
        if (!pq.empty()) {
            if (pq.top().first > 1) {
                return "";
            }
            ans += pq.top().second;
        }
        
        return ans;
    }
};
