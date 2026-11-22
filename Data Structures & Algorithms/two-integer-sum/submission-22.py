class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict = {}
        result = []
        for i in range(len(nums)): 
            dict[nums[i]] = i

    
        

        for i, j in enumerate(nums): 
            complement = target - j
            if complement in dict: 
               if (i != dict[complement]):
                    result.append(i)
                    result.append(dict[complement])
                    return result
        
        return result
         
            