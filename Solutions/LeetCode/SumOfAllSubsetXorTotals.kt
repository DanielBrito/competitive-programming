class Solution {
    fun subsetXORSum(nums: IntArray): Int {
        val subsets = getSubsets(nums)
        val subsetsXor = buildList { subsets.forEach{ add(xorAll(it)) } }

        return subsetsXor.sum()
    }

    private fun getSubsets(nums: IntArray): List<List<Int>> {
        val result = mutableListOf<List<Int>>()

        result.add(emptyList())

        for (num in nums) {
            val newSubsets = mutableListOf<List<Int>>()

            for (subset in result) {
                val newSubset = subset.toMutableList()

                newSubset.add(num)
                newSubsets.add(newSubset)
            }

            result.addAll(newSubsets)
        }

        return result
    }

    private fun xorAll(numbers: List<Int>): Int {
        if(numbers.size == 0) return 0
        return numbers.reduce { acc, num -> acc xor num }
    }
}
