class Solution {

public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<long, int> sumToCount;
        int n = nums.size();
        long count = 0;
        for (int i = 0; i < n - 1; i++) {
            int left = nums[i];
            for (int j = i + 1; j < n; j++) {
                sumToCount[left * nums[j]]++;
            }
        }
        
        for (auto& sumToCountItem : sumToCount) {
            int n = sumToCountItem.second;
            if (n == 1) continue;
            count += n * (n - 1 ) * 4;
        }
        return count;
    }
};