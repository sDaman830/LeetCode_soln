class Solution {
public:
int bb(vector<int> &nums, vector<int> &dp, int index)
{
    if(index == 0) return nums[0];
    if(index < 0) return 0;
    if(dp[index] != -1) return dp[index];
     return dp[index] = max(nums[index]+bb(nums,dp,index-2), bb(nums , dp ,index-1));

}
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return bb(nums , dp , nums.size()-1);       
    }
};