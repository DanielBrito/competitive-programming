class Solution {
    fun isPalindrome(x: Int): Boolean {
        if(x < 0) return false

        return x == reverseNumber(x)
    }

    private fun reverseNumber(num: Int): Int {
        var result = 0
        var n = num

        while(n != 0) {
            val remainder = n % 10

            result = result * 10 + remainder

            n /= 10
        }

        return result
    }
}
