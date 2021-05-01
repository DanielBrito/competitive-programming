// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/intermediate-algorithm-scripting/steamroller

function steamrollArray(arr) {
  const flattenedArray = [];

  for (let i = 0; i < arr.length; i++) {
    if (Array.isArray(arr[i])) {
      flattenedArray.push(...steamrollArray(arr[i]));
    } 
    else {
      flattenedArray.push(arr[i]);
    }
  }

  return flattenedArray;
};

steamrollArray([1, [2], [3, [[4]]]]);