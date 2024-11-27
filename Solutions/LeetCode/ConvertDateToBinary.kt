class Solution {
    fun convertDateToBinary(date: String): String {
        val (year, month, day) = date.split("-")

        val dayBinary = numToBinary(day)
        val monthBinary = numToBinary(month)
        val yearBinary = numToBinary(year)

        return "$yearBinary-$monthBinary-$dayBinary"
    }

    private fun numToBinary(num: String): String {
        val numAsInt = num.toInt()

        return when(numAsInt) {
            0 -> "0"
            1 -> "1"
            else -> numToBinary((numAsInt / 2).toString()) + (numAsInt % 2).toString()
        }
    }
}
