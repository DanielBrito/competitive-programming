/* https://www.hackerrank.com/challenges/a-very-big-sum/problem */

public class veryBigSum {

	public static void main(String[] args) {
		
	long[] array = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
	
		System.out.println(VeryBigSum(array));

	}
	
	public static long VeryBigSum(long[] array) {
		
		long result=0;
		
		for(int i=0; i<array.length; i++) {
			
			result += array[i];
		}
		
		return result;
	}
}
