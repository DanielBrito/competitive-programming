/* https://www.hackerrank.com/challenges/staircase/problem */

function staircase(n) {
  let count = 1;
  let answer = "";
  
  for(let i=0; i<n; i++){

    for(let j=0; j<n-count; j++){

      answer += " ";
    }

    for(let j=0; j<count; j++){

      answer += "#";
    }

    ++count;

    answer += "\n";
  }
  
  console.log(answer);
}

staircase(6);
