// https://www.hackerrank.com/challenges/marcs-cakewalk/problem

function marcsCakewalk(calorie: number[]): number {
    let result = 0;
    
    let sortedCalories = calorie.sort((a, b) => b - a);
    
    for(let i=0; i<calorie.length; i++){
        result += Math.pow(2, i) * sortedCalories[i];
    }
    
    return result;
}