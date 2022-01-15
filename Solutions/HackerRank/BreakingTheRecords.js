// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

function breakingRecords(scores) {
  var max = scores[0];
  var min = scores[0];

  var countMost = 0;
  var countLeast = 0;

  scores.slice(1).forEach(function (score) {
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
