/* https://algodaily.com/challenges/is-an-anagram */

function countChar(str1, str2){
    
    if(str1.length!=str2.length) return false;
    
    var x=0, y=0;
    
    str1.toLowerCase();
    str2.toLowerCase();
    
    for(var i=0; i<str1.length || i<str2.length; i++){
        
        x += str1.charCodeAt(i);
        y += str2.charCodeAt(i);
    }
    
    return x==y ? true : false; 
}

console.log(countChar("Mary", "Army"))