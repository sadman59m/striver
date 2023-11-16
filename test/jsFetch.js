async function coins() {
  const api =
    "https://api.coingecko.com/api/v3/coins/markets?vs_currency=usd&order=market_cap_desc&per_page=100&page=1&sparkline=false";

  const response = await fetch(api);

  const data = await response.json();

  console.log(data);
}

coins();

// const res = await fetch(
//   "https://api.coingecko.com/api/v3/coins/markets?vs_currency=usd&order=market_cap_desc&per_page=100&page=1&sparkline=false"
// );

// const data = await res.json();

// console.log(data);

// const { error } = require("console");
// const https = require("https");

// const url =
//   "https://api.coingecko.com/api/v3/coins/markets?vs_currency=usd&order=market_cap_desc&per_page=100&page=1&sparkline=false";

// const options = {
//   method: "GET",
//   headers: {
//     "Content-Type": "application/json",
//   },
// };

// const request = https.request(url, options, (res) => {
//   let data = [];
//   res.on("data", (chunk) => {
//     data.push(chunk);
//   });

//   res.on("end", () => {
//     const parsedBody = Buffer.concat(data).toString();

//     console.log(parsedBody);
//     // const result = JSON.parse(data);
//     // console.log(result);
//   });
// });

// request.on("error", (error) => {
//   console.error(error.message);
// });

// request.end();
