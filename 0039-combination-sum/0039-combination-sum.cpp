class Solution {
public:
  void   sam(int target , int i , vector<int> &c, vector<vector<int>> &ans,vector<int> &su,int n )
    {
         if(i==n)
         {
        if(target == 0)
        {
            ans.push_back(su);
         
}
       return;
         }
           if(target<0) return;
     
        su.push_back(c[i]);
        sam(target-c[i],i,c,ans,su,n);
            su.pop_back();
        sam(target,i+1,c,ans,su,n);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> su;
        sam(target,0,candidates,ans,su,candidates.size());
       map<vector<int>,int> mp;
        for(auto i: ans)
            mp[i]++;
        vector<vector<int>> a;
        for(auto i : mp)
            a.push_back(i.first);
        return a;
            
        
    }
};