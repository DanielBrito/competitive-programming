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
 * Complete the 'halloweenParty' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER k as parameter.
 */

fun halloweenParty(k: Int): Long {
    return (Math.ceil(k/2.0) * Math.floor(k/2.0)).toLong()
}

fun main(args: Array<String>) {
    val t = readLine()!!.trim().toInt()

    for (tItr in 1..t) {
        val k = readLine()!!.trim().toInt()

        val result = halloweenParty(k)

        println(result)
    }
}
