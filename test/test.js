const crypto = require("crypto");

crypto.randomBytes(8, (err, buff) => {
  if (err) throw err;
  console.log(buff.toString("hex"));
});

console.log("loser");
