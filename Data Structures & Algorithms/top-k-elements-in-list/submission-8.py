class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # First make a dictionary 

        freq = {}
        result = []

        for i in nums: 
            if i in freq: 
                freq[i] += 1
            else: 
                freq[i] = 1

        
        print(freq)
        sorted_freq_values = sorted(freq.items(), key=lambda x:x[1], reverse = True)
        #sorted_freq_values = sorted(freq, reverse = True)
        print(sorted_freq_values)
        
        for index, i in enumerate(sorted_freq_values): 
            if index < k:
                result.append(i[0])


        return result