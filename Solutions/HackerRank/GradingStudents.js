// https://www.hackerrank.com/challenges/grading/problem

function gradingStudents(grades) {
  var result = [];

  grades.forEach(function (grade) {
    var nextMultiple = findNextMultiple(grade);
    if (nextMultiple < 40 || Math.abs(grade - nextMultiple) >= 3) {
      result.push(grade);
    } else if (Math.abs(grade - nextMultiple) < 3) {
      result.push(nextMultiple);
    }
  });

  function findNextMultiple(n) {
    while (n % 5 !== 0) n++;
    return n;
  }
  return result;
}
