// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/intermediate-algorithm-scripting/search-and-replace

function myReplace(str, before, after) {
  var index = str.indexOf(before);

  if (str[index] === str[index].toUpperCase()) {
    after = after.charAt(0).toUpperCase() + after.slice(1);
  } 
  else {
    after = after.charAt(0).toLowerCase() + after.slice(1);
  }
  
  str = str.replace(before, after);

  return str;
}