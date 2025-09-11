class Solution {
    fun numberOfEmployeesWhoMetTarget(hours: IntArray, target: Int): Int {
        return hours.filter { it >= target }.size // or hours.count { it >= target }
    }
}
