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
 * Complete the 'funnyString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

fun funnyString(s: String): String {
    val n = s.length
    val reversed = s.reversed()
    val sValues = IntArray(n-1)
    val reversedValues = IntArray(n-1)
    var valuesPos = 0
    
    for(i in 0..n-2) {
        sValues[valuesPos] = Math.abs(s[i] - s[i+1])
        reversedValues[valuesPos] = Math.abs(reversed[i] - reversed[i+1])
        valuesPos++
    }
    
    for(i in 0..n-2) {
        if(sValues[i] != reversedValues[i]) return "Not Funny"
    }
    
    return "Funny"
}

fun main(args: Array<String>) {
    val q = readLine()!!.trim().toInt()

    for (qItr in 1..q) {
        val s = readLine()!!

        val result = funnyString(s)

        println(result)
    }
}
