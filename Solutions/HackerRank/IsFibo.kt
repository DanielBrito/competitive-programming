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
 * Complete the 'isFibo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts LONG_INTEGER n as parameter.
 */

fun isFibo(n: Long): String {
    val isFibo =  generateSequence(Pair(0L, 1L)) { Pair(it.second, it.first + it.second) }
        .map { it.first }
        .takeWhile { it <= n }
        .any { it == n }
        
    return if(isFibo) "IsFibo" else "IsNotFibo"
}

fun main(args: Array<String>) {
    val t = readLine()!!.trim().toInt()

    for (tItr in 1..t) {
        val n = readLine()!!.trim().toLong()

        val result = isFibo(n)

        println(result)
    }
}
