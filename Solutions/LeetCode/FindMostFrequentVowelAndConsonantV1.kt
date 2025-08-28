class Solution {
    fun maxFreqSum(s: String): Int {
        val lettersCount = mutableMapOf<Char,Int>()

        for (letter in s) {
            val currentValue = lettersCount[letter] ?: 0
            lettersCount[letter] = currentValue + 1
        }

        val maxVowel = lettersCount
            .filter { "aeiou".contains(it.key) }
            .maxOfOrNull { it.value } ?: 0
        val maxConsonant = lettersCount
            .filter { "bcdfghjklmnpqrstvwxyz".contains(it.key) }
            .maxOfOrNull { it.value } ?: 0

        return maxVowel + maxConsonant
    }
}
