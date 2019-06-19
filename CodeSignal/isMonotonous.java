/* https://app.codesignal.com/challenge/Bbr2AGZQw2CHofuao */

public class isMonotonous {

	public static void main(String[] args) {
		
		int[] sequence = {3, 3};
		
		System.out.println(IsMonotonous(sequence));
	}
	
	public static boolean IsMonotonous(int[] sequence) {
		
		if(sequence[0]<=sequence[sequence.length-1]) {
			
			for(int i=0; i<sequence.length-1; i++) {
				
				if(sequence[i]>=sequence[i+1]) {
					
					return false;
				}
			}
		}
		else
		if(sequence[0]>=sequence[sequence.length-1]) {
			
			for(int i=0; i<sequence.length-1; i++) {
				
				if(sequence[i]<=sequence[i+1]) {
					
					return false;
				}
			}
		}

		return true;
	}
}
