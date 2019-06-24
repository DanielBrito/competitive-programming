/* https://app.codesignal.com/challenge/JwirnFz8qyM87a3yG */

public class fractionSubtraction {

	public static void main(String[] args) {
		
		int[] fractionA = {7, 10};
		int[] fractionB = {3, 10};
		
		int[] result = new int[2];
		
		result = FractionSubtraction(fractionA, fractionB);
		
		System.out.println("[" + result[0] + ", " + result[1] + "]");
	}
	
	public static int[] FractionSubtraction(int[] a, int[] b) {
		
		int[] r = new int[2];
		
		int m = lcm(a[1], b[1]);
			
		r[0] = ((m/a[1])*a[0])-((m/b[1])*b[0]);
		r[1] = m;
		
		int i=2;
		
		while(!coprime(r[0], r[1])){
			
			if(r[0]%i==0 && r[1]%i==0) {
				
				r[0] /= i;
				r[1] /= i;
			}
			
			i++;
		}
		
		return r;
	}
	
	public static int lcm(int a, int b) {
		
		int r = (a>b) ? a : b;
		
        while(true){
        	
            if(r%a==0 && r%b==0){
            	
                return r;
            }
            
            ++r;
        }
	}
	
	public static boolean coprime(int a, int b) {
		
		int div=0;
		
		for(int i=1; i<a || i<b; i++) {
			
			if(a%i==0 && b%i==0) {
				
				++div;
			}
			
			if(div>1) return false;
		}
		
		return true;
	}

}
