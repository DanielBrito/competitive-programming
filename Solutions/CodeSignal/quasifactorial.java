/* https://app.codesignal.com/challenge/53DMcWRBbZMdsF6vm */

public class quasifactorial {

	public static void main(String[] args) {
		
		int n=4;

		System.out.println(Quasifactorial(n)));
	}
	
	public static int Quasifactorial(int n){

		return n==1 ? 1 : n * Quasifactorial(n-1) - 1;
	}
}
