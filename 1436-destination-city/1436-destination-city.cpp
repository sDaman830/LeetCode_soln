class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>h;
        for(int i=0; i<paths.size(); i++) {
            h[paths[i][0]]++;
            h[paths[i][1]]++;
        }
        
        for(int i=0; i<paths.size(); i++) {
            if(h[paths[i][1]]==1) {
                return paths[i][1];
            }
        }
       return "d";
    }
};