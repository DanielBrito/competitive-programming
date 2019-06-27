/* https://app.codesignal.com/challenge/3rokc7xtdSQoZBJBv */

public class myConcat {

	public static void main(String[] args) {
		
		String[] strings = {"Code", "Fights", "On", "!"};
		String separator = "/";
		
		System.out.println(MyConcat(strings, separator));
	}
	
	public static String MyConcat(String[] strings, String separator) {
		
	    int i=0, l = strings.length;
	    String result="";
	    
	    while(i<l) result+=strings[i++]+separator;
	    
	    return result;
	}

}
