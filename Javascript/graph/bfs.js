const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

// Read number of vertices (v) and number of edges (e)
rl.question(
  "Enter number of vertices (v) and number of edges (e) separated by space: ",
  (input) => {
    const [v, e] = input.split(" ").map(Number);

    // Initialize an empty adjacency list for the graph
    const adj = new Array(v).fill().map(() => []);

    // Read and populate the adjacency list
    for (let i = 0; i < e; ++i) {
      rl.question(
        `Edge ${i + 1}: Enter vertices a and b separated by space: `,
        (edgeInput) => {
          const [a, b] = edgeInput.split(" ").map(Number);
          adj[a].push(b);
          adj[b].push(a);

          if (i === e - 1) {
            printAdjacencyList(adj);
            rl.close();
          }
        }
      );
    }
  }
);

function printAdjacencyList(adj) {
  for (let i = 0; i < adj.length; ++i) {
    process.stdout.write(`Vertex ${i}: `);
    for (let j = 0; j < adj[i].length; ++j) {
      process.stdout.write(`${adj[i][j]} `);
    }
    console.log();
  }
}
