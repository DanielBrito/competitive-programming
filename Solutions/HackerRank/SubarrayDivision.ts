// https://www.hackerrank.com/challenges/the-birthday-bar/problem

function birthday(s: number[], d: number, m: number): number {
    let result = 0;
    
    for(let i=0; i<s.length; i++){
        let sumSegment = 0;
        
        for(let j=i; j<i+m; j++){
            sumSegment += s[j]    
        }
        
        if(sumSegment === d) result++;
    }

    return result;
}