function addWith(num) {
  return function addWithNum(num2) {
    return num + num2;
  };
}

const addWithSeven = addWith(7);

console.log(addWithSeven(5));
console.log(addWithSeven(7));
