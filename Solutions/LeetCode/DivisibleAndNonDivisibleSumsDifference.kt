class Solution {
    fun differenceOfSums(n: Int, m: Int): Int {
        var divisible = 0
        var nonDivisible = 0

        for(i in 1..n) {
            if(i % m == 0) divisible += i
            else nonDivisible += i
        }

        return nonDivisible - divisible
    }
}
