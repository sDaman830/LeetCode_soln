class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans = 0;
         if(k<= 1)return 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
          int curr = nums[i];
             if(curr<k) ans++;
            for(int j = i+1 ; j < nums.size() ; j++)
            {
                  curr*=nums[j];

                if(curr<k) ans++;
                else break;
              
}
        }
        return ans;
        }
};