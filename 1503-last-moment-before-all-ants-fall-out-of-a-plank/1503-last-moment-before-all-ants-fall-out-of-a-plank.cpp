class Solution {
public:
        int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans = 0;
        if(left.size()!=0){
            for(auto iter : left){
                ans = max(ans,iter);
            }
        }
        if(right.size()!=0){
            for(auto iter : right){
                ans = max(ans,n-iter);
            }            
        }
        return ans;
    }
};