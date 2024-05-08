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
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

fun kaprekarNumbers(p: Int, q: Int): Unit {
    var found = false
    
    for(i in p..q) {
        if(isKaprekarNumber(i.toLong())) {
            print("$i ")
            found = true
        }
    }
    
    if(!found) println("INVALID RANGE")
}

private fun isKaprekarNumber(n: Long): Boolean {
    val numberOfDigits = countDigits(n).toDouble()
    val beta = (n*n) % Math.pow(10.0, numberOfDigits).toLong()
    val alpha = (n*n - beta) / Math.pow(10.0, numberOfDigits).toLong()
    
    return alpha + beta == n
}

private fun countDigits(n: Long): Int {
    var count = 0
    var num = n

    while (num != 0L) {
        num /= 10
        count++
    }

    return count
}

fun main(args: Array<String>) {
    val p = readLine()!!.trim().toInt()

    val q = readLine()!!.trim().toInt()

    kaprekarNumbers(p, q)
}
