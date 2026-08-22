class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        b=len(nums)
        for i in range(b):
            for j in range(i+1,b):
                if nums[i]+nums[j]==target:
                    return [i,j]
                else:
                    continue
        return []