// https://www.hackerrank.com/challenges/kangaroo/problem

function kangaroo(x1, v1, x2, v2) {
  if ((x1 > x2 && v1 > v2) || (x2 > x1 && v2 > v1)) {
    return "NO";
  }

  var diffX = Math.abs(x1 - x2);
  var diffV = Math.abs(v1 - v2);

  return diffX % diffV === 0 ? "YES" : "NO";
}
