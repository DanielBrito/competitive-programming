class Solution {
    fun transformArray(nums: IntArray): IntArray {
        val numsSize = nums.size
        val result = IntArray(numsSize)
        val numberOfEvenNumbers = nums.count { it % 2 == 0 }
        val numberOfOddNumbers = numsSize - numberOfEvenNumbers

        result.fill(0, 0, numberOfEvenNumbers)
        result.fill(1, numberOfEvenNumbers, numsSize)

        return result
    }
}
