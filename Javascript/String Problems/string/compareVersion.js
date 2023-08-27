var compareVersion = function (version1, version2) {
  const v1 = version1.split(".");
  const v2 = version2.split(".");
  let i = 0;
  const maxLen = Math.max(v1.length, v2.length);
  while (i < maxLen) {
    let num1 = i < v1.length ? +v1[i] : 0; // Use i instead of 0
    let num2 = i < v2.length ? +v2[i] : 0; // Use i instead of 0

    console.log(`${num1}  ${num2}`);

    if (num1 > num2) return 1;
    else if (num1 < num2) return -1;
    else ++i;
  }
  return 0;
};

console.log(compareVersion("1.0.1", "1"));
