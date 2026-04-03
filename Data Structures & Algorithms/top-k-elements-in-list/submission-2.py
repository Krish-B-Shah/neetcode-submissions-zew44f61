class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # Step 1: Count frequencies
        freq = {}
        for n in nums:
            if n not in freq:
                freq[n] = 1
            else:
                freq[n] += 1

        # Step 2: Sort by frequency in descending order
        sorted_freq = sorted(freq.items(), key=lambda x: x[1], reverse=True)

        # Step 3: Extract top k keys
        result = []
        for i in range(k):
            result.append(sorted_freq[i][0])

        return result
