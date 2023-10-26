class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        if(s.size()==1) return 1;
        vector<int> c(1260, -1);
        int ini = 0;
        int maxi = 0; 
        for (int i = 0; i < s.size(); i++) {
            if (c[s[i] ] != -1) {
                ini = max(ini, c[s[i] ] + 1);
            }
            maxi = max(maxi, i - ini + 1);
            c[s[i] ] = i;
        }
        return maxi;
    }
};
