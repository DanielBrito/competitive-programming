class Solution {
    fun minimumOperations(nums: IntArray): Int {
        var result = 0

        for(i in nums.indices) {
            result += min(nums[i] % 3, 3 - (nums[i] % 3))
        }

        return result
    }
}
