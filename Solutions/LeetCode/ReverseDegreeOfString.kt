class Solution {
    fun reverseDegree(s: String): Int {
        val letters = ('z' downTo 'a').toList()
        val degrees = (1 until 27).toList()
        val reversedAlphabetIndex = letters.zip(degrees).toMap()
        var result = 0

        for((index, letter) in s.withIndex()) {
            val reversedIndex = reversedAlphabetIndex[letter] ?: 0
            result += reversedIndex * (index + 1)
        }

        return result
    }
}
