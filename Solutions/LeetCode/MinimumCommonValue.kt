class Solution {
    fun getCommon(nums1: IntArray, nums2: IntArray): Int {
        val set1 = nums1.toSet()
        val set2 = nums2.toSet()
        val intersection = set1.intersect(set2)

        return intersection.minOrNull() ?: -1
    }
}
