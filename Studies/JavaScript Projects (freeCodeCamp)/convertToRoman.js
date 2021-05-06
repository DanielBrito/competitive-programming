// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/javascript-algorithms-and-data-structures-projects/roman-numeral-converter

var convertToRoman = function (num) {
  var decimals = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];
  var romans = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"];

  let converted = "";

  for (let i = 0; i < decimals.length; i++) {
    while (decimals[i] <= num) {
      converted += romans[i];
      num -= decimals[i];
    }
  }

  return converted;
};

console.log(convertToRoman(3999));
