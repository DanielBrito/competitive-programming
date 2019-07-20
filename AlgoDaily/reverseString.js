/* https://algodaily.com/challenges/reverse-a-string */

function reverseString(str) {
    
    var strRev="";
    
    for(var i=str.length-1; i>=0; i--){
        
        strRev += str[i];
    }
  
    return strRev;
}

str = "daniel"

console.log(reverseString(str))
