/* https://app.codesignal.com/challenge/TuHac4M5746kwqTaH */

package com.br.problems;

public class arrayElementsProduct {

	public static void main(String[] args) {
		
		int a[] = {1, 3, 2, 10};
		
		System.out.println(ArrayElementsProduct(a));
	}
	
	public static int ArrayElementsProduct(int[] a) {
		
		int r=1;
		
		for(int i=0; i<a.length; i++) {
			
			r *= a[i];
		}
		
		return r;
	}
}
