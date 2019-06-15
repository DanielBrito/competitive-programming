/* https://app.codesignal.com/challenge/j4tsozmpSzHSzS8sF */

package com.br.problems;

public class countInversionsNaive {

	public static void main(String[] args) {

		int[] array = {1, 4, 10, 4, 2};
		
		System.out.println(CountInversionsNaive(array));
	}
	
	public static int CountInversionsNaive(int[] a) {
	    
	    int t, c=0;
	    
	    for(int i=0; i<a.length; i++){
	        
	        for(int j=0; j<a.length-1; j++){
	            
	            if(a[j]>a[j+1]){
	                
	                t = a[j];
	                a[j] = a[j+1];
	                a[j+1] = t;
	                
	                ++c;
	            }
	        }
	    }
	    
	    return c;
	}
}
