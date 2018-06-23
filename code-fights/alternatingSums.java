/* https://codefights.com/arcade/intro/level-4/cC5QuL9fqvZjXJsW9 */

public class alternatingSums {

	public static void main(String[] args) {

		int[] a = {50, 60, 60, 45, 70};
		int[] result = {0,0};
		
		for(int i=0; i<a.length; i++) {
			
			if(i%2==0) {
				
				result[0] += a[i];
			}
			else {
				
				result[1] += a[i];
			}
		}
		
		System.out.println("[" + result[0] + ", " + result[1] + "]");
	}
}
