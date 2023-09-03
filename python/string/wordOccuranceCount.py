def countWordOccu(inputLine):
    wordsStore = {}
    for word in inputLine:
        if word in wordsStore:
            wordsStore[word] = wordsStore[word] + 1
        else:
            wordsStore[word] = 1
    return wordsStore


inputLine = input("Enter line: ")

soln = countWordOccu(inputLine)

for item in soln:
    print(f"{item} -> {soln[item]}")

print(soln)
