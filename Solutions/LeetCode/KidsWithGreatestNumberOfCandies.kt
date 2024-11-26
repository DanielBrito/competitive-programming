class Solution {
    fun kidsWithCandies(candies: IntArray, extraCandies: Int): List<Boolean> {
        val maxCandies = candies.max()
        val n = candies.size
        val result = MutableList(n) { false }

        candies.forEachIndexed { index, value ->
            if(value + extraCandies >= maxCandies) {
                result[index] = true
            }
        }

        return result
    }
}
