// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/intermediate-algorithm-scripting/seek-and-destroy

function destroyer(arr, ...values) {
  return arr.filter(elem => !values.includes(elem));;
}

destroyer([1, 2, 3, 1, 2, 3], 2, 3);