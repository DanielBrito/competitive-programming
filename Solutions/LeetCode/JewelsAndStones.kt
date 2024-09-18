class Solution {
    fun numJewelsInStones(jewels: String, stones: String): Int {
        val stoneCount = mutableMapOf<Char, Int>()
        var result = 0

        for(stone in stones) {
            stoneCount[stone] = stoneCount.getOrDefault(stone, 0) + 1
        }

        for((stone, count) in stoneCount) {
            val isJewel = jewels.indexOf(stone) != -1

            if(isJewel) result += count
        }

        return result
    }
}
