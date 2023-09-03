function countChar(line) {
  const storeChars = {};

  for (let ch of line) {
    if (storeChars[ch]) {
      storeChars[ch] += 1;
    } else {
      storeChars[ch] = 1;
    }
  }
  return storeChars;
}

const line = "saddksfdddtheis";
const ans = countChar(line);

for (let item in ans) {
  console.log(`${item} -> ${ans[item]}`);
}
