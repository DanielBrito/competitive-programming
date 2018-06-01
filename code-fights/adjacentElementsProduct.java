/* https://codefights.com/arcade/intro/level-2/xzKiBHjhoinnpdh6m*/

public class adjacentElementsProduct {

	public static void main(String[] args) {
		
		int[] inputArray = {5, 1, 2, 3, 1, 4};
		int maxProd = Integer.MIN_VALUE;
		
		for(int i=0; i<(inputArray.length)-1; i++) {
			
			if((inputArray[i]*inputArray[i+1])>maxProd) {
				
				maxProd = inputArray[i]*inputArray[i+1];
			}
		}
		
		System.out.println("Result = " + maxProd);		
	}
}
