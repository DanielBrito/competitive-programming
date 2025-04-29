class Solution {
    fun mostWordsFound(sentences: Array<String>): Int {
        val wordCount = buildMap {
            sentences.forEach { sentence ->
                put(sentence, sentence.split(" ").size)
            }
        }

        return wordCount.maxBy { it.value }.value
    }
}

/*
class Solution {
    fun mostWordsFound(sentences: Array<String>): Int {
        return sentences.maxOf { it.split(" ").size }
    }
}
*/
