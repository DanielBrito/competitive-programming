/* https://www.hackerrank.com/challenges/simple-array-sum/problem */

/* https://codeburst.io/javascript-arrays-finding-the-minimum-maximum-sum-average-values-f02f1b0ce332 */

function simpleArraySum(ar) {
    return ar.reduce((accumulator, value) => accumulator + value, 0)
}

console.log(simpleArraySum([1,2,3,4,5,6]));