// https://www.hackerrank.com/challenges/birthday-cake-candles/problem

const candles = [4, 4, 1, 3];

function birthdayCakeCandles(candles) {
  const countMap = new Map();

  candles.forEach((candle) => {
    if (countMap.has(candle)) {
      countMap.set(candle, countMap.get(candle) + 1);
    } else {
      countMap.set(candle, 1);
    }
  });

  return Math.max(...countMap.values());
}

console.log(birthdayCakeCandles(candles));
