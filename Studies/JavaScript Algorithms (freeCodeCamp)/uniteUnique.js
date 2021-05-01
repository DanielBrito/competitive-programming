// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/intermediate-algorithm-scripting/sorted-union

function uniteUnique(...arrays) {
  let arr = []
  arr = arr.concat(...arrays);
  return [...new Set(arr)];
}

uniteUnique([1, 3, 2], [5, 2, 1, 4], [2, 1]);