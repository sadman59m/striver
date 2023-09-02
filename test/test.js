const globalContext = this;

const outerArrowFunction = function () {
  const outerArrowFunction = this;
  const innerArrowFunction = () => {
    console.log(this === outerArrowFunction); // true
    console.log(this === globalContext);
  };

  innerArrowFunction();
};

outerArrowFunction();
