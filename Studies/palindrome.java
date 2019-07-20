public class palindrome {

	public static void main(String[] args) {
		
		String str = "socorrammesubinoonibusemmarrocos";
		
		System.out.println(palindromeV1(str));
		
		System.out.println(palindromeV2(str));
		
		System.out.println(palindromeV3(str));
	}
	
	// Traverse the whole string from left to right and right to left (simultaneously) comparing each character:
	// Time complexity: O(n) | Space complexity: O(1)
	
	public static boolean palindromeV1(String str) {
		
		for(int i=0, j=str.length()-1; i<str.length() && j>=0; i++, j--) {
			
			if(str.charAt(i)!=str.charAt(j)) return false;
		}
		
		return true;
	}
	
	// Uses StringBuffer method to create a copy of the string, then reverse it to make the comparison:
	// Time complexity: O(n) | Space complexity: O(1)
	
	public static boolean palindromeV2(String str) {
		
		return str.equals(new StringBuffer(str).reverse().toString());
	}
	
	// Similar to the first method, but in this case we just check the string until its middle:
	// Time complexity: O(log n) | Space complexity: O(1)
	
	public static boolean palindromeV3(String str) {
		
		for(int i=0, j=str.length()-1; i<str.length()/2; i++, j--) {
			
			if(str.charAt(i)!=str.charAt(j)) return false;
		}
		
		return true;
	}
}
