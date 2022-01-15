// https://www.hackerrank.com/challenges/birthday-cake-candles/problem

const candles = [4, 4, 1, 3];

function birthdayCakeCandles(candles: number[]): number {
  const maxValue = Math.max(...candles);

  return candles.filter((value) => value === maxValue).length;
}

console.log(birthdayCakeCandles(candles));
