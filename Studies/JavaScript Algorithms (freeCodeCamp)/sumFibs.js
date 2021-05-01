// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/intermediate-algorithm-scripting/sum-all-odd-fibonacci-numbers

function sumFibs(num) {
  if (num <= 0) return 0;

  const arrFib = [1, 1];
  let nextFib = 0;

  while ((nextFib = arrFib[0] + arrFib[1]) <= num) {
    arrFib.unshift(nextFib);
  }

  return arrFib.filter(x => x % 2 != 0).reduce((a, b) => a + b);
}

sumFibs(4);