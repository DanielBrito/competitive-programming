class Solution {
    fun findWordsContaining(words: Array<String>, x: Char): List<Int> {
        val result = mutableListOf<Int>()

        for(i in words.indices) {
            if(words[i].contains(x)) {
                result.add(i)
            }
        }

        return result
    }
}
