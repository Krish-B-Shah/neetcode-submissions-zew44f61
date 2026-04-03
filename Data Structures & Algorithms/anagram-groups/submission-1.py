from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        sorted_hash_map = {}
        for i in strs:
            sorted_i = tuple(sorted(i))  # make it hashable
            if sorted_i in sorted_hash_map:
                sorted_hash_map[sorted_i].append(i)
            else:
                sorted_hash_map[sorted_i] = [i]

        return list(sorted_hash_map.values())
