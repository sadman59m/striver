// async function coins() {
//   const api =
//     "https://api.coingecko.com/api/v3/coins/markets?vs_currency=usd&order=market_cap_desc&per_page=100&page=1&sparkline=false";

//   const response = await fetch(api);

//   const data = await response.json();

//   console.log(data);
// }

// coins();

const res = await fetch(
  "https://api.coingecko.com/api/v3/coins/markets?vs_currency=usd&order=market_cap_desc&per_page=100&page=1&sparkline=false"
);

const data = await res.json();

console.log(data);
