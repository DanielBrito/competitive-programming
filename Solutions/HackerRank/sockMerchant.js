// https://www.hackerrank.com/challenges/sock-merchant

function sockMerchant(n, ar) {    
    if(n==1) return 0;
    
    let countMap = new Map();
    
    for(let i=0; i<n; i++){
        if(countMap.has(ar[i])){
            countMap.set(ar[i], countMap.get(ar[i])+1);
        }
        else{
            countMap.set(ar[i], 1);
        }
    }
    
    let socksCount = [...countMap.values()]
    
    let countPairs = socksCount
        .map(value => Math.floor(value/2))
        .reduce((a, b) => {return a+b}, 0);
    
    return countPairs;
}