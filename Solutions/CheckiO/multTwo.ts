const assert = require('assert').strict;

function multTwo(a: number, b: number): number {
    return a*b;
}

console.log('Example:');
console.log(multTwo(3, 2));

// These "asserts" are used for self-checking
assert.equal(multTwo(3, 2), 6);
assert.equal(multTwo(0, 1), 0);

console.log("Coding complete? Click 'Check' to earn cool rewards!");