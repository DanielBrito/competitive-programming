/* https://app.codesignal.com/challenge/L9Ar3f2cgZsmeXAKh */

import java.util.ArrayList;

public class differentValuesInMultiplicationTable2 {

	public static void main(String[] args) {
		
		System.out.println(DifferentValuesInMultiplicationTable2(4,4));
	}
	
	public static int DifferentValuesInMultiplicationTable2(int n, int m) {
		
		ArrayList<Integer> r = new ArrayList<Integer>();
		int count = 0;
		
		for(int i=1; i<=n; i++) {
			
			for(int j=1; j<=m; j++) {
				
				if(!r.contains(i*j)) {
					
					++count;
				}
				
				r.add(i*j);
			}
		}
		
		return count;
	}
}
