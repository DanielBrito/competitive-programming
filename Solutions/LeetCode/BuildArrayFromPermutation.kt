class Solution {
    fun buildArray(nums: IntArray): IntArray {
        val n = nums.size
        val result = IntArray(n)

        for(i in nums.indices) {
            result[i] = nums[nums[i]]
        }

        return result
    }
}
