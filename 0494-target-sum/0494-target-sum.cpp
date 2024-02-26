#include <vector>
using namespace std;

class Solution {
public:
    void func(int index, vector<int> &nums, int target, int sum, int &count) {
        if (index == nums.size()) {
            if (sum == target) {
                count++;
            }
            return;
        }
        
        func(index + 1, nums, target, sum + nums[index], count);
        
        func(index + 1, nums, target, sum - nums[index], count);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int count = 0;
        func(0, nums, target, 0, count);
        return count;
    }
};
