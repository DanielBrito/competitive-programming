// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/javascript-algorithms-and-data-structures-projects/palindrome-checker

function palindrome(str) {
  let newStr = str.toLowerCase().replace(/[^a-zA-Z0-9\\s]/g, "");
  return newStr === newStr.split("").reverse().join("");
}

palindrome("My age is 0, 0 si ega ym.");