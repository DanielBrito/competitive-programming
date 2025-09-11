class Solution {
    fun leftRightDifference(nums: IntArray): IntArray {
        val leftSum = IntArray(nums.size) { 0 }
        val rightSum = IntArray(nums.size) { 0 }
        var computed = 0

        for(i in 1 until nums.size) {
            computed += nums[i - 1]
            leftSum[i] = computed
        }

        computed = 0

        for(i in nums.size - 2 downTo 0) {
            computed += nums[i + 1]
            rightSum[i] = computed
        }

        return leftSum.zip(rightSum) { a, b -> Math.abs(a - b)}.toIntArray()
    }
}
