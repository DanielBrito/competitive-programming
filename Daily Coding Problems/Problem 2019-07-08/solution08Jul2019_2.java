/* Another solution using ArrayList. But it's not so efficient since function contains needs to traverse aux to find the complement. */

import java.util.ArrayList;
import java.util.List;

public class solution08Jul2019 {

    public static void main(String[] args) {
        
        int[] numbers = {10, 15, 13, 2};
        int k = 17;
        
        System.out.println(sumTwo(numbers, k));
    }
    
    public static boolean sumTwo(int[] numbers, int k) {
        
        List<Integer> aux = new ArrayList<Integer>();
        
        for (int i=0; i<numbers.length; i++) {
            
            int complement = k-numbers[i];
            
            if(aux.contains(complement)) {
                
                return true;
            }
            
            aux.add(numbers[i]);
        }
        
        return false;
    }
}
