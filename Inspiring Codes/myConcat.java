/* By: dcoles @ CodeSignal */

public class myConcat {

	public static void main(String[] args) {
		
		String[] strings = {"Code", "Fights", "On", "!"};
		String separator = "/";
		
		System.out.println(MyConcat(strings, separator));
	}
	
	public static String MyConcat(String[] strings, String separator) {

        return separator.join(strings, separator) + separator;
	}

}
