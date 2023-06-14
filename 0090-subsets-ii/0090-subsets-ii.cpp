#include <vector>
#include <algorithm>

class Solution {
public:
    void subsetsWithDupHelper(vector<int>& nums, int start, vector<int>& subset, vector<vector<int>>& result) {
        result.push_back(subset); 
        
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1])
                continue; 
            
            subset.push_back(nums[i]); 
            subsetsWithDupHelper(nums, i + 1, subset, result); 
            subset.pop_back(); 
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        sort(nums.begin(), nums.end()); 
        subsetsWithDupHelper(nums, 0, subset, result);
        return result;
    }
};
