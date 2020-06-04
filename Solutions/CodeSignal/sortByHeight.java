/* https://codefights.com/arcade/intro/level-3/D6qmdBL2NYz49XHwM */

public class sortByHeight {

	public static void main(String[] args) {

		int[] a = {-1, 150, 190, 170, -1, -1, 160, 180};
		
		for(int i=0; i<a.length; i++) {
			
			System.out.print(a[i] + " ");
		}
		
		for(int i=0; i<a.length; i++) {
			
			if(a[i]==-1) {
				
				continue;
			}
			else {
				
				for(int j=i+1; j<a.length; j++) {
					
					if(a[i]>a[j] && a[j]!=-1) {
						
						int aux = a[i];
						a[i] = a[j];
						a[j] = aux;
					}
				}
			}
		}
		
		System.out.println();
		
		for(int i=0; i<a.length; i++) {
			
			System.out.print(a[i] + " ");
		}
	}
}
