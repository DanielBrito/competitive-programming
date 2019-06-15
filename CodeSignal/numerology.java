/* https://app.codesignal.com/challenge/uTzTdsrpjWEbr37xP */

public class numerology {

	public static void main(String[] args) {
		
		String name = "Isaac Newton";
		String birthDate = "25/12/1642";
		
		System.out.println(Numerology(name, birthDate));
	}
	
	public static String Numerology(String name, String birthDate) {
		
		String[] verdict = {"", "primal force", "all-knowing", "creative child", "salt of the earth", "dynamic force", "caretaker", "seeker", "balance and power", "global awareness"};
		int number=0, result=0;
		
		for(int i=0; i<birthDate.length(); i++) {
			
			if(!(birthDate.charAt(i)=='/')) {
				
				number += Integer.parseInt(String.valueOf(birthDate.charAt(i))); 
				
				if(number>9) {
					
					result = number%10 + number/10;
					number = result;
				}
				else {
					
					result = number;
				}
			}
		}
		
		return name + ": The " + verdict[result];
	}
}
