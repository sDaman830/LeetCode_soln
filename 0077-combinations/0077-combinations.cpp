class Solution {
public:
    void bb(int n , int k , vector<vector<int>>& ans ,int na,vector<int> &subans)
    {
        if(!k) 
        {
            ans.push_back(subans);
            return;
        }
        if(na > n) return;
        
        bb(n , k , ans , na+1 ,subans);
        subans.push_back(na);
         
         bb(n,k-1,ans,na+1,subans);
        
       subans.pop_back();

    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> subans;
        bb(n , k , ans,1,subans);
        return ans;
        
    }
};