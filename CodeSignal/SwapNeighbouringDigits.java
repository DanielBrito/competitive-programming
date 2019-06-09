/* https://app.codesignal.com/challenge/vJMeEAya7gEckYfQW*/

public class SwapNeighbouringDigits {

	public static void main(String[] args) {
		
		int n = 12345678;
		
		System.out.println(swapNeighbouringDigits(n));
	}
	
	public static int swapNeighbouringDigits(int n) {
		
		StringBuilder number = new StringBuilder(Integer.toString(n));
		
		for(int i=0; i<number.length(); i+=2) {
			
			char temp;
			
			temp = number.charAt(i);
			number.setCharAt(i, number.charAt(i+1));
			number.setCharAt(i+1, temp);
		}
			
		return Integer.parseInt(number.toString());
	}
}
