class Solution {
    fun maximumWealth(accounts: Array<IntArray>): Int {
        var maxWealth = 0

        for(i in accounts.indices) {
            var moneySum = 0

            for(j in accounts[0].indices) {
                moneySum += accounts[i][j]
            }

            maxWealth = maxOf(moneySum, maxWealth)
        }        

        return maxWealth
    }
}
