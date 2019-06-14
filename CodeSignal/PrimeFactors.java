/* https://app.codesignal.com/challenge/Xa5wqxrtQB9e47Yeq */

import java.util.ArrayList;
import java.util.Arrays;

public class PrimeFactors {

	public static void main(String[] args) {
		
		int n=100;

		System.out.println(Arrays.toString(primeFactors(n)));
	}
	
	public static int[] primeFactors(int n){
		
		ArrayList<Integer> list = new ArrayList<Integer>();
		int i=2;
		
		while(n!=1){
			
			if(isPrime(i)==true && n%i==0){
				
				list.add(i);
						
				n /= i;
				
				while(n%i!=0 && n!=1){
					
					++i;
				}
			}
		}
		
		return list.stream().mapToInt(Integer::intValue).toArray();
	}
	
	public static boolean isPrime(int n) {
	    
	    int i, countDiv=0;

        if(n==1) return false;
	    
	    for(i=1; i<=n; i++){
	        
	        if(n%i==0){
	            
	            ++countDiv;
	        }
	        
	        if(countDiv>2){
	            
	            return false;
	        }
	    }
	    
	    return true;
	}
}