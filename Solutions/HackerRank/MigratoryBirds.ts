// https://www.hackerrank.com/challenges/migratory-birds/problem

function migratoryBirds(arr: number[]): number {
  let countArr = new Array(6).fill(0);

  for (let i = 0; i < arr.length; i++) {
    countArr[arr[i]]++;
  }

  return countArr.indexOf(Math.max(...countArr));
}
