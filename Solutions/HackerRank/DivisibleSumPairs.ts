// https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

function divisibleSumPairs(n: number, k: number, ar: number[]): number {
  let result = 0;

  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      if ((ar[i] + ar[j]) % k === 0) result++;
    }
  }

  return result;
}
