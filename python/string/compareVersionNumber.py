class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1 = version1.split('.')
        v2 = version2.split('.')
        i = 0
        maxLen = max(len(v1), len(v2))
        while (i < maxLen):
            num1 = int(v1[i]) if i < len(v1) else 0
            num2 = int(v2[i]) if i < len(v2) else 0

            if (num1 > num2):
                return 1
            elif (num1 < num2):
                return -1
            else:
                i = i+1
        return 0


version1 = input("version1: ")
version2 = input("version2: ")


soln1 = Solution()
ans = soln1.compareVersion(version1, version2)
print(ans)
