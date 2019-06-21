/* https://app.codesignal.com/challenge/2w6tp2Lxk6T5QzZxq */

package com.br.problems;

import java.util.Arrays;

public class makeArrayConsecutive2 {

	public static void main(String[] args) {
		
		int[] statues = {6, 2, 3, 8};
		
		System.out.println(MakeArrayConsecutive2(statues));
	}
	
	public static int MakeArrayConsecutive2(int[] s) {
		
	    Arrays.sort(s);
	    int x=0, d, i=0;

	    while(i<s.length-1) {
	        
	        if((d=s[i+1]-s[i])>1) x+=d-1;	
	        
	        i++;
	    }

	    return x;
	}
}
