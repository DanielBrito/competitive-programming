/* https://algodaily.com/challenges/validate-palindrome */

function isPalindrome(str) {
	
	str = str.toLowerCase().split(' ').join('');
	
	var reversed = str.split('').reverse().join('');
	
	return str==reversed ? true : false;
}

console.log(isPalindrome("A Santa Lived As a Devil At NASA"))