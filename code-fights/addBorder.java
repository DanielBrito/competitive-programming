/* https://codefights.com/arcade/intro/level-4/ZCD7NQnED724bJtjN */

public class addBorder {

	public static void main(String[] args) {
		
		String[] picture = {"abc", "def"};
		
		String[] result = new String[picture.length+2];
		
		for(int i=0; i<result.length; i++) {
			
			result[i] = "";
		}		
		
		int p = 0;
		
		for(int i=0; i<result.length; i++) {
			
			if(i==0) {
				
				for(int j=0; j<picture[0].length()+2; j++) {
					
					result[i] += "*";
				}
			}
			else
			if(i==result.length-1) {
				
				for(int j=0; j<picture[0].length()+2; j++) {
					
					result[i] += "*";
				}
			}
			else {
				
				result[i] = "*" + picture[p] + "*";
				p++;
			}
		}
		
		for(String str: result) {
			
			System.out.println(str);
		}
	}
}
