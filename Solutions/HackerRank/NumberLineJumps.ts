// https://www.hackerrank.com/challenges/kangaroo/problem

function kangaroo(x1: number, v1: number, x2: number, v2: number): string {
  if ((x1 > x2 && v1 > v2) || (x2 > x1 && v2 > v1)) {
    return "NO";
  }

  const diffX = Math.abs(x1 - x2);
  const diffV = Math.abs(v1 - v2);

  return diffX % diffV === 0 ? "YES" : "NO";
}
