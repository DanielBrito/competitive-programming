// https://www.hackerrank.com/challenges/apple-and-orange/problem

function countApplesAndOranges(s, t, a, b, apples, oranges) {
  var countApples = countFruits(apples, a, s, t);
  var countOranges = countFruits(oranges, b, s, t);

  function countFruits(fruits, tree, s, t) {
    var counter = 0;

    fruits.forEach(function (d) {
      var position = tree + d;

      if (position >= s && position <= t) {
        counter++;
      }
    });

    return counter;
  }

  console.log(countApples);
  console.log(countOranges);
}
