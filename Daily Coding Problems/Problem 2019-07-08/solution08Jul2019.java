import java.util.HashMap;
import java.util.Map;

public class solution08Jul2019 {

	public static void main(String[] args) {
		
		int[] numbers = {10, 11, 13, 2};
		int k = 17;
		
		System.out.println(sumTwo(numbers, k));
	}
	
	public static boolean sumTwo(int[] numbers, int k) {
		
		Map<Integer, Integer> map = new HashMap<>();
        
        for (int i=0; i<numbers.length; i++) {
            
            int complement = k-numbers[i];
            
            if (map.containsKey(complement)) {
                
                return true;
            }
            
            map.put(numbers[i], i);
        }
        
        return false;
	}
}
