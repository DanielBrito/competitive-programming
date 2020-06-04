/* https://leetcode.com/problems/two-sum/ */

import java.util.Arrays;

public class twoSum {

	public static void main(String[] args) {
		
		int[] nums = {2, 7, 11, 15};
		int target = 9;
		
		System.out.println(Arrays.toString(TwoSum(nums, target)));
	}
	
	public static int[] TwoSum(int[] nums, int target) {
		
		for(int i=0; i<nums.length-1; i++) {
			
			for(int j=i+1; j<nums.length; j++) {
				
				if(nums[i]+nums[j]==target) {
					
					return new int[] {i, j};
				}
			}
		}
		
		return null;
	}
}