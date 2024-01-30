class Solution {
    fun romanToInt(s: String): Int {
        val map = mapOf<String, Int>(
            "I" to 1,
            "V" to 5,
            "X" to 10,
            "L" to 50,
            "C" to 100,
            "D" to 500,
            "M" to 1000
        )
        var integerNumber = 0
        var lastRomanSymbol = ""

        for (i in s.length-1 downTo 0) {
            val currentRomanSymbol = s[i].toString()
            val currentInteger = map[currentRomanSymbol] ?: 0

            if(map.keys.indexOf(currentRomanSymbol) < map.keys.indexOf(lastRomanSymbol)) {
                integerNumber -= map[currentRomanSymbol] ?: 0
            } else {
                integerNumber += currentInteger
            }

            lastRomanSymbol = currentRomanSymbol
        }

        return integerNumber
    }
}
