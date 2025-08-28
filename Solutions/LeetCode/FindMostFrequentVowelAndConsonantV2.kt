class Solution {
    fun maxFreqSum(s: String): Int {
        var maxVowel = 0
        var maxConsonant = 0
        val lettersCount = mutableMapOf<Char, Int>()
        
        for (letter in s) {
            val currentCount = lettersCount.getOrDefault(letter, 0) + 1
            lettersCount[letter] = currentCount

            when (letter) {
                'a', 'e', 'i', 'o', 'u' -> {
                    maxVowel = maxOf(maxVowel, currentCount)
                }
                else -> {
                    maxConsonant = maxOf(maxConsonant, currentCount)
                }
            }
        }
        
        return maxVowel + maxConsonant
    }
}
