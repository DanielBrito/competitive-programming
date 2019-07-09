/* https://leetcode.com/articles/two-sum/# */

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class twoSum {

    public static void main(String[] args) {
        
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        
        System.out.println(Arrays.toString(TwoSum(nums, target)));
    }
    
    public static int[] TwoSum(int[] nums, int target) {
        
        Map<Integer, Integer> map = new HashMap<>();
        
        for (int i = 0; i < nums.length; i++) {
            
            int complement = target - nums[i];
            
            if (map.containsKey(complement)) {
                
                return new int[] { map.get(complement), i };
            }
            
            map.put(nums[i], i);
        }
        
        throw new IllegalArgumentException("No two sum solution");
    }
}