/* https://codefights.com/arcade/intro/level-3/fzsCQGYbxaEcTr2bL */

public class allLongestStrings {

	public static void main(String[] args) {
		
		String[] inputArray = {"aba", "aa", "ad", "vcd", "aba"};
		int maxLength = Integer.MIN_VALUE, count=0, i, j;
		
		for(i=0; i<inputArray.length; i++) {
			
			if(inputArray[i].length()>maxLength) {
				
				maxLength = inputArray[i].length();
			}
		}
		
		for(i=0; i<inputArray.length; i++) {
			
			if(inputArray[i].length()==maxLength) {
				
				count++;
			}
		}
		
		String[] strMax = new String[count];
		
		for(i=0, j=0; j<inputArray.length; j++) {
				
			if(inputArray[j].length()==maxLength) {
				
				strMax[i] = inputArray[j];
				i++;
			}
		}
		
		for(i=0; i<strMax.length; i++) {
			
			System.out.println(strMax[i]);
		}
	}
}