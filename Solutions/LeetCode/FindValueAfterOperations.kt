class Solution {
    fun finalValueAfterOperations(operations: Array<String>): Int {
        var result = 0

        for(op in operations) {
            when(op) {
                "--X" -> --result
                "X--" -> result--
                "++X" -> ++result
                "X++" -> result++
            }
        }

        return result
    }
}
