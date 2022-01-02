const arr = Array(3)
  .fill(0)
  .map(() => Array(3).fill(0));

for (let i = 0; i < arr.length; i++) {
  for (let j = 0; j < arr[0].length; j++) {
    process.stdout.write(`${arr[i][j]} `);
  }

  console.log("");
}
