/* https://www.hackerrank.com/challenges/simple-array-sum/problem */

function simpleArraySum(ar) {
    return ar.reduce((accumulator, value) => accumulator + value, 0)
}

console.log(simpleArraySum([1,2,3,4,5,6]));