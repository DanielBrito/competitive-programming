// https://www.hackerrank.com/challenges/grading/problem

function gradingStudents(grades: number[]): number[] {
  let result: number[] = [];

  grades.forEach((grade) => {
    const nextMultiple = findNextMultiple(grade);

    if (nextMultiple < 40 || Math.abs(grade - nextMultiple) >= 3) {
      result.push(grade);
    } else if (Math.abs(grade - nextMultiple) < 3) {
      result.push(nextMultiple);
    }
  });

  function findNextMultiple(n: number): number {
    while (n % 5 !== 0) n++;
    return n;
  }

  return result;
}
