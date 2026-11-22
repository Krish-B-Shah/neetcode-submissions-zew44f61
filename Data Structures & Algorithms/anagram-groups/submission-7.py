class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # I need to map sorted with unsorted values

        dictionary = {}
        for i in strs: 
            sorted_i = ''.join(sorted(i))
            if (sorted_i in dictionary): 
                dictionary[sorted_i].append(i)
            else: 
                dictionary[sorted_i] = [i]
        
        result = []
        for key in dictionary: 
            result.append(dictionary[key])

        return result