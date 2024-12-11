class Solution {
    fun countConsistentStrings(allowed: String, words: Array<String>): Int {
        var result = 0
        var allowedCharSet = allowed.toSet()

        for(word in words) {
            val wordCharSet = word.toSet()
            val isSubset = wordCharSet.all { it in allowedCharSet }

            if(isSubset) result++ 
        }

        return result
    }
}
