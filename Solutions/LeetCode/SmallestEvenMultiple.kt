class Solution {
    fun smallestEvenMultiple(n: Int): Int {
        return if(n % 2 == 0) n
        else 2 * n
    }
}
