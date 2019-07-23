/* https://algodaily.com/challenges/is-an-anagram */

function isAnagram(str1, str2) {
  
    if(str1.length!=str2.length) return false;
    
    var a = str1.toLowerCase();
    var b = str2.toLowerCase();
  
    a = a.split('').sort().join('');
    b = b.split('').sort().join('');
        
    return a === b;
}

console.log(isAnagram("Mary", "Army"))