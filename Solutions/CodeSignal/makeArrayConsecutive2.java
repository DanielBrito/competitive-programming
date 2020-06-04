/* https://codefights.com/arcade/intro/level-2/bq2XnSr5kbHqpHGJC */

import java.util.Arrays;

public class makeArrayConsecutive2 {

	public static void main(String[] args) {
		
		int[] statues = {6,2,3,8};
		int additional = 0;
		
		Arrays.sort(statues);
		
		for(int i=0; i<statues.length-1; i++) {
			
			if((statues[i+1]-statues[i])>1) {
				
				while(statues[i]+1<statues[i+1]) {
					
					additional++;
					statues[i]++;
				}				
			}
		}
		
		System.out.println("Additional statues: " + additional);
	}
}
