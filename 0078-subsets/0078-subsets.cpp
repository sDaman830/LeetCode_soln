class Solution {
public:
    void ans(vector<int>& nums , int i , vector<vector<int>> &ansi,vector<int>& h)
    {
        if(i >= nums.size()) 
        {
            ansi.push_back(h);
            return;
        }
       
       
        h.push_back(nums[i]);
        ans(nums,i+1,ansi,h);

         h.pop_back();
        ans(nums,i+1,ansi,h);
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ansi;
        vector<int> h;
        ans(nums,0,ansi,h);
        return ansi;
    }
};