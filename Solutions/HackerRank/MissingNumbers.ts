// https://www.hackerrank.com/challenges/missing-numbers/problem

function missingNumbers(arr: number[], brr: number[]): number[] {
    let result: number[] = [];
    
    let aMap = new Map<number, number>()
    let bMap = new Map<number, number>()
    
    arr.forEach((value) => {
        aMap.has(value) ? aMap.set(value, aMap.get(value)+1) : aMap.set(value, 1)
    });
    
    brr.forEach((value) => {
        bMap.has(value) ? bMap.set(value, bMap.get(value)+1) : bMap.set(value, 1)
    })
    
    bMap.forEach((value: number, key: number) => {
        if(aMap.get(key)===undefined){
            result.push(key)
        }
        else if(value-aMap.get(key)>0){
            result.push(key)
        }
    })
    
    return result.sort();
}
