/* https://app.codesignal.com/challenge/J6tdsqwGn5Jikp6nW */

public class isInformationConsistent {

	public static void main(String[] args) {

		int[][] evidences = {{0,0,-1}, 
				             {-1,1,-1}, 
				             {-1,1,0}, 
				             {0,1,0}};
		
		System.out.println(IsInformationConsistent(evidences));
	}
	
	public static boolean IsInformationConsistent(int[][] evidences) {
		
		boolean pos, neg;
		
		for(int i=0; i<evidences[0].length; i++) {
			
			pos=false; neg=false;
		
			for(int j=0; j<evidences.length; j++) {
				
				if(evidences[j][i]==-1) neg=true;
				if(evidences[j][i]==1) pos=true;
				
				if(neg && pos) return false;
			}
		}
		
		return true;
	}
}
