class Solution {
    fun leftRightDifference(nums: IntArray): IntArray {
        val result = IntArray(nums.size) { 0 }
        val leftSum = IntArray(nums.size) { 0 }
        val rightSum = IntArray(nums.size) { 0 }

        for(i in 0 until leftSum.size) {
            var sum = 0

            for(j in i - 1 downTo 0) {
                sum += nums[j]    
            }

            leftSum[i] = sum
        }

        for(i in 0 until rightSum.size) {
            var sum = 0

            for(j in i + 1 until nums.size) {
                sum += nums[j]
            }

            rightSum[i] = sum
        }

        for(i in 0 until result.size) {
            result[i] = Math.abs(leftSum[i] - rightSum[i])
        }

        return result
    }
}
