class Solution {
    fun minOperations(nums: IntArray, k: Int): Int {
        var numsTotalSum = nums.sum()

        if(numsTotalSum % k == 0) return 0

        var result = 0

        while(numsTotalSum % k != 0) {
            numsTotalSum--
            result++
        }

        return result
    }
}
