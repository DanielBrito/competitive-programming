/* https://app.codesignal.com/challenge/jmv55DMT7ywJaPcsC */

public class minimalNumberOfCoins {

	public static void main(String[] args) {
		
		int[] coins = {1, 2, 20, 60, 120};
		int price = 150;
		
		System.out.println(MinimalNumberOfCoins(coins, price));
	}
	
	public static int MinimalNumberOfCoins(int[] coins, int price) {
		
		int count=0;
			
		for(int i=coins.length-1; i>=0; i--) {
			
			while(price>=coins[i]) {
				
				++count;
				price-=coins[i];
			}
		}
		
		return count;
	}
}
