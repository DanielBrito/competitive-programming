/* https://codefights.com/arcade/intro/level-3/JKKuHJknZNj4YGL32 */

public class commonCharacterCount {

	public static void main(String[] args) {
		
		String str1 = "abcdefghxyzttw"; String str2 = "hgfedcbaabcwwt";
		
		int commonTotal=0, i, countS1=0, countS2=0;
		
		char[] s1 = str1.toCharArray();
		char[] s2 = str2.toCharArray();
		
		if(s1.length>s2.length) {
			
			for(i=0; i<s1.length; i++) {
				
				if(s1[i]!='-') {
					
					countS1 = countOccurances(s1, s1[i]);
					countS2 = countOccurances(s2, s1[i]);
					
					replaceChar(s1, s1[i], '-');
					replaceChar(s2, s1[i], '-');
					
					if(countS1<=countS2) {
						
						commonTotal += countS1;
					}
					else {
						
						commonTotal += countS2;
					}
				}
			}
		}
		else {
			
			for(i=0; i<s1.length && i<s2.length; i++) {
				
				if(s1[i]!='-') {
					
					countS1 = countOccurances(s1, s1[i]);
					countS2 = countOccurances(s2, s1[i]);
					
					replaceChar(s1, s1[i], '-');
					replaceChar(s2, s1[i], '-');
					
					if(countS1<=countS2) {
						
						commonTotal += countS1;
					}
					else {
						
						commonTotal += countS2;
					}
				}
			}
		}
		
		System.out.println(commonTotal);
	}
	
	public static int countOccurances(char[] str, char ch) {
		
		int count=0;
		
		for(int i=0; i<str.length; i++) {
			
			if(str[i]==ch) {
				
				count++;
			}
		}
		
		return count;
	}
	
	public static void replaceChar(char[] str, char ch, char chNew) {
		
		for(int i=0; i<str.length; i++) {
			
			if(str[i]==ch) {
				
				str[i] = chNew;
			}
		}
	}
}


