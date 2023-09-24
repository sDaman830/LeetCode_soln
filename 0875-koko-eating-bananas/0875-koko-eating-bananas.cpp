class Solution {
public:
    int hours;
    bool check(vector<int> v, int k){
        int t=0;
        for(auto i:v){
            t+=(i/k)+(i%k!=0);
            if(t>hours)return false;
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        hours=h;
        int left=1;
        int right=0;
         if(check(piles,left)) return left;
        for(auto it: piles)
        {
            right = max(it,right);
        }
        while(right>left+1){
            int mid=left + (right-left)/2;
            if(check(piles,mid)) right=mid;
            else left=mid;
        }
       
        return right;
    }
};