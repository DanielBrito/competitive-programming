class Solution {
    fun findPermutationDifference(s: String, t: String): Int {
        var result = 0

        for(i in 0 until s.length) {
            result += Math.abs(i - t.indexOf(s[i]))
        }

        return result        
    }
}
