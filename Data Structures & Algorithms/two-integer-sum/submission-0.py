class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:\
        # Brute Force: 
            sum = 0
            result = [0,0]
            for i in range(len(nums)): 
                for j in range(i+1, len(nums)): 
                    sum = nums[i]+nums[j]
                    if (sum == target): 
                        result = [i, j]
                        return result
                        
            
            return result
