class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_map = {}

        for index, value in enumerate(nums): 
            if target - value  not in hash_map: 
              hash_map[value] = index
            else: 
                return [hash_map[target-value], index]
        return[]