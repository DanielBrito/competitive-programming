class Solution {
    fun scoreOfString(s: String): Int {
        var score = 0

        for(i in 0..s.length-2) {
            score += Math.abs(s[i] - s[i+1])
        }

        return score
    }
}
