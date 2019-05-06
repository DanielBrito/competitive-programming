/* https://codefights.com/arcade/intro/level-2/xskq4ZxLyqQMCLshr */

public class matrixElementsSum {

	public static void main(String[] args) {
		
		int[][] matrix = {{0,1,1,2},
		    	          {0,5,0,0},
				  {2,0,3,3}};
		
		int row = matrix.length;
		int col = matrix[0].length;
		
		int i, j, total=0, count=0;
		
		for(j=0; j<col; j++) {
			
			count = 0;
			
			for(i=0; i<row; i++) {
				
				if(matrix[i][j]==0) {
					
					count++;
				}
				else {
					
					if(count==0) {
						
						total += matrix[i][j];
					}
				}
			}
		}
		
		System.out.println(total);
	}
}
