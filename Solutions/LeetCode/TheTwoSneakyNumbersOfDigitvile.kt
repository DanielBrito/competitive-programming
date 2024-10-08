class Solution {
    fun getSneakyNumbers(nums: IntArray): IntArray {
        val countNumbers = mutableMapOf<Int, Int>()
        val result = mutableListOf<Int>()

        nums.forEach { num ->
            countNumbers[num] = countNumbers.getOrDefault(num, 0) + 1
        }

        for((key, value) in countNumbers) {
            if(value == 2) result.add(key)
        }

        return result.toIntArray()
    }
}
