class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = {}
        for i ,num in enumerate(nums):
         if(target-num in mp):
            return {i , mp[target-num]}
         mp[num] = i
            
        