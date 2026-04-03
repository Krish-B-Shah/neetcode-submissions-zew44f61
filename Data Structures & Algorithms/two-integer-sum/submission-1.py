class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:\
      # Hash map 
        numbers = {}
        for i, n in enumerate(nums): 
            remaining = target - n 
            if remaining in numbers: 
                return [numbers[remaining], i]
            numbers[n] = i
    
        return []
    
