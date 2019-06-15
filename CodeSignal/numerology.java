/* https://app.codesignal.com/challenge/uTzTdsrpjWEbr37xP */

package com.br.problems;

public class numerology {

	public static void main(String[] args) {
		
		String name = "Isaac Newton";
		String birthDate = "25/12/1642";
		
		System.out.println(Numerology(name, birthDate));
	}
	
	public static String Numerology(String name, String birthDate) {
		
		String[] verdict = {"", ": The primal force", ": The all-knowing", ": The creative child", ": The salt of the earth", ": The dynamic force", ": The caretaker", ": The seeker", ": The balance and power", ": The global awareness"};
		int number=0, result=0;
		
		for(int i=0; i<birthDate.length(); i++) {
			
			if(!(birthDate.charAt(i)=='/')) {
				
				number += Integer.parseInt(String.valueOf(birthDate.charAt(i))); 
			}
		}

	    while(number>0 || result>9) { 
	    	
	        if(number==0) { 
	        	
	            number = result; 
	            result = 0; 
	        } 
	        
	        result += number%10; 
	        number /= 10; 
	    } 
		
		return name + verdict[result];
	}
}
