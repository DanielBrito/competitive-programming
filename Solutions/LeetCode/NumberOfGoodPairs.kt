class Solution {
    fun numIdenticalPairs(nums: IntArray): Int {
        var result = 0
        var end = nums.size - 1

        for(i in nums.indices) {
            for(j in end downTo i + 1) {
                if(nums[i] == nums[j]) {
                    result ++
                }
            }
        }

        return result
    }
}
