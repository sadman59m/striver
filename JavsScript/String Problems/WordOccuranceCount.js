function countWordOccurance(line) {
  const letterOccurences = {};
  for (let i = 0; i < line.length; ++i) {
    if (letterOccurences[line[i]]) {
      letterOccurences[line[i]]++;
    } else {
      letterOccurences[line[i]] = 1;
    }
  }
  return letterOccurences;
}

const wordsCounts = countWordOccurance("thiiisisaStirng@$#52034");
for (const word in wordsCounts) {
  console.log(word + " " + wordsCounts[word]);
}
