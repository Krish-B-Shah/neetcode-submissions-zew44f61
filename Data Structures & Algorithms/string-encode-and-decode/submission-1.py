class Solution:

    def encode(self, strs: List[str]) -> str:
        result = ""
        for i in strs: 
            result += "".join(i)
            result+="/"
        return result

    def decode(self, s: str) -> List[str]:
        result = []
        string_result = ""
        for i in s: 
            if i == "/": 
                result.append(string_result)
                string_result = ""
            else: 
                string_result += "".join(i)
        return result