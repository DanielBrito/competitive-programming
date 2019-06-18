/* https://app.codesignal.com/challenge/rApnerc87hMTtXB3a */

public class swapDiagonals {

	public static void main(String[] args) {
		
		int[][] matrix = {{10, 11, 12, 13},
		                  {14, 15, 16, 17},
		                  {18, 19, 20, 21},
		                  {22, 23, 24, 25}};
		
		printMatrix(SwapDiagonals(matrix));
	}
	
	public static int[][] SwapDiagonals(int[][] matrix){
		
		int temp, aux = matrix.length-1;
		
		for(int i=0; i<matrix.length; i++) {
			
			for(int j=0; j<matrix[i].length; j++) {
				
				if(i==j) {
					
					temp = matrix[i][j];					
					matrix[i][j] = matrix[i][aux];					
					matrix[i][aux] = temp;	
					--aux;
				}
			}
		}
		
		return matrix;
	}
	
	public static void printMatrix(int[][] m) {
		
		for(int i=0; i<m.length; i++) {
			
			for(int j=0; j<m[i].length; j++) {
				
				System.out.print("[" + m[i][j] + "] ");
			}
			
			System.out.println();
		}
	}

}
