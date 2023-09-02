const person = {
  name: "sakib",
  showNameNested: function () {
    const show = () => {
      return this.name; // sakib
    };
    return show();
  },

  showNameNesFirst: function () {
    // if we set name = 'sadman' here, then the output is 'sadman'
    // by 'this' keyword, arrow Fn refer to surrounding context
    const shoeNameNesSecond = function () {
      const nestedNesterName = () => {
        return this.name; // undefined
      };
      return nestedNesterName();
    };
    return shoeNameNesSecond();
  },

  showName: function () {
    return this.name; // sakib
  },

  showArrowName: () => {
    console.log(this.name); // undefined
  },
};

console.log(person.showNameNested());
console.log(person.showNameNesFirst());
console.log(person.showName());
person.showArrowName();
