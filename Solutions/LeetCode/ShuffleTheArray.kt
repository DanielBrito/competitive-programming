class Solution {
    fun shuffle(nums: IntArray, n: Int): IntArray {
        val result = IntArray(n*2)
        var firstHalfIndex = 0
        var secondHalfIndex = n

        for(i in 0 until n*2 step 2) {
            result[i] = nums[firstHalfIndex++]
            result[i+1] = nums[secondHalfIndex++]
        }

        return result
    }
}
