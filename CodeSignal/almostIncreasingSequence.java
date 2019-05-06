/* https://codefights.com/arcade/intro/level-2/2mxbGwLzvkTCKAJMG */

public class almostIncreasingSequence {

	public static void main(String[] args) {
		
		int[] sequence = {1,2,3,4,3,6};
		
		int equalGreater=0, postConsecutive=0, i;
		
		for(i=0; i<sequence.length-1; i++) {
		
			if(sequence[i]>=sequence[i+1]) {
						
				equalGreater++;
			}
		}
		
		for(i=0; i<sequence.length-2; i++) {
			
			if(sequence[i]>=sequence[i+2]) {
						
				postConsecutive++;
			}
		}
		
		if(equalGreater+postConsecutive>2) {
			
			System.out.println("False");
		}
		else {
			
			System.out.println("True");			
		}
	}
}
