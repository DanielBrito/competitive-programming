// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

function breakingRecords(scores: number[]): number[] {
  let max = scores[0];
  let min = scores[0];

  let countMost = 0;
  let countLeast = 0;

  scores.slice(1).forEach((score) => {
    if (score > max) {
      countMost++;
      max = score;
    }

    if (score < min) {
      countLeast++;
      min = score;
    }
  });

  return [countMost, countLeast];
}
