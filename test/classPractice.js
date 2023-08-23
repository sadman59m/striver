class Animal {
  constructor() {}
  speak() {
    console.log(`Animal speaking `);
  }
}

class Dog extends Animal {
  constructor(name) {
    super();
    this.name = name;
  }
  speak() {
    super.speak();
    console.log(`${this.name} speaking`);
  }
}

const dog1 = new Dog("perky");

dog1.speak();
