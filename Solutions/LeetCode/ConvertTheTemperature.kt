class Solution {
    fun convertTemperature(celsius: Double): DoubleArray {
        val kelvin = celsius + 273.15
        val fahrenheit = celsius * 1.80 + 32.00

        return doubleArrayOf(kelvin, fahrenheit)
    }
}
