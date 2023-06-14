#include <vector>
#include <algorithm>

class Solution {
public:
    void subsetsWithDupHelper(vector<int>& nums, int i, vector<int>& subset, vector<vector<int>>& result,int n) {
       if(i== n)
       {
           result.push_back(subset);
           return;
}
        subset.push_back(nums[i]);
        subsetsWithDupHelper(nums, i+1, subset,  result,n);
        subset.pop_back();
         subsetsWithDupHelper(nums,  i+1, subset,  result,n);
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        int n = nums.size();
        sort(nums.begin(), nums.end()); 
        subsetsWithDupHelper(nums, 0, subset, result,n);
        map<vector<int>,int> mp;
        for(auto i : result)
        {
            mp[i]++;
}
        vector<vector<int>> ans;
        for(auto j: mp)
        {
            ans.push_back(j.first);
}
        return ans;
    }
};
