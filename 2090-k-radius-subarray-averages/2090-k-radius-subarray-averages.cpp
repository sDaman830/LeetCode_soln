class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans(nums.size(),-1);
        int c = 0;
        long long int sum = 0;
        for(int i = 0 ; i< nums.size();i++)
        {
            sum+=nums[i];
            if(i-c == 2*k)
            {
                ans[c+k] = sum/(2*k+1);
                sum-=nums[c];
                c++;
                            
                
            }
     
}
        return ans;
        
    }
};