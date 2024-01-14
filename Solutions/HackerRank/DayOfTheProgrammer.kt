import java.io.*
import java.math.*
import java.security.*
import java.text.*
import java.util.*
import java.util.concurrent.*
import java.util.function.*
import java.util.regex.*
import java.util.stream.*
import kotlin.collections.*
import kotlin.comparisons.*
import kotlin.io.*
import kotlin.jvm.*
import kotlin.jvm.functions.*
import kotlin.jvm.internal.*
import kotlin.ranges.*
import kotlin.sequences.*
import kotlin.text.*

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

fun dayOfProgrammer(year: Int): String {
    if(year == 1918) {
        return "26.09.$year"
    } else if((year <= 1917 && isLeapYearJulianCalendar(year)) || isLeapYearGregorianCalendar(year)) {
        return "12.09.$year"
    } else {
        return "13.09.$year"
    }
}

private fun isLeapYearJulianCalendar(year: Int): Boolean {
    return year % 4 == 0
}

private fun isLeapYearGregorianCalendar(year: Int): Boolean {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)
}

fun main(args: Array<String>) {
    val year = readLine()!!.trim().toInt()

    val result = dayOfProgrammer(year)

    println(result)
}
