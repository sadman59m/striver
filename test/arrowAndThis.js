const person = {
  name: "sakib",
  showNameNested: function () {
    const show = () => {
      return this.name; // sakib
    };
    return show();
  },

  showNameNestedSecond: function () {
    // own context where the function is defined
    const newNestedShow = function () {
      return this.name; // undefined. this context has no name property
    };

    return newNestedShow();
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

console.log(person.showNameNestedSecond());
