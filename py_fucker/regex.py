import re

s = "number in phone"

print(re.search("phone", s))

# for i in (re.search("phone", s).span())[0]:
#     print(s[i])

# print((re.search("phone", s).span())[1])

prase = "ther are 2 numbers in this 1 345 line"


result = re.findall(r"[^\d]+", prase)
print(result)
