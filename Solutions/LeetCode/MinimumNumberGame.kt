class Solution {
    fun numberGame(nums: IntArray): IntArray {
        nums.sort()
        
        val n = nums.size
        val result = IntArray(n)

        for(i in 0 until n) {
            result[i] = if(i % 2 == 0) nums[i+1] else nums[i-1]
        }

        return result
    }
}
