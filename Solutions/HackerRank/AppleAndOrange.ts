// https://www.hackerrank.com/challenges/apple-and-orange/problem

function countApplesAndOranges(
  s: number,
  t: number,
  a: number,
  b: number,
  apples: number[],
  oranges: number[]
): void {
  const countApples = countFruits(apples, a, s, t);
  const countOranges = countFruits(oranges, b, s, t);

  function countFruits(fruits: number[], tree: number, s: number, t: number) {
    let counter = 0;

    fruits.forEach((d) => {
      const position = tree + d;

      if (position >= s && position <= t) {
        counter++;
      }
    });

    return counter;
  }

  console.log(countApples);
  console.log(countOranges);
}
