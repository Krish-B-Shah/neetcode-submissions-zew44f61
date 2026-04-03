class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        output = [1] * n
        
        # Step 1: fill output with left products
        for i in range(1, n):
            output[i] = output[i-1] * nums[i-1]
        
        # Step 2: multiply with right products
        right_product = 1
        for i in reversed(range(n)):
            output[i] *= right_product
            right_product *= nums[i]
        
        return output
