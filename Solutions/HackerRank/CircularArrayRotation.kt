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
 * Complete the 'circularArrayRotation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER k
 *  3. INTEGER_ARRAY queries
 */

fun circularArrayRotation(a: Array<Int>, k: Int, queries: Array<Int>): Array<Int> {
    val result = mutableListOf<Int>()
    val rotatedA = Array(a.size) { 0 }
    val n = a.size
    
    for(i in 0..n-1) {
        val newPos = (i + k) % n
        rotatedA[newPos] = a[i]
    }
    
    for(q in queries) {
        result.add(rotatedA[q])
    }
    
    return result.toTypedArray()
}

fun main(args: Array<String>) {
    val first_multiple_input = readLine()!!.trimEnd().split(" ")

    val n = first_multiple_input[0].toInt()

    val k = first_multiple_input[1].toInt()

    val q = first_multiple_input[2].toInt()

    val a = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val queries = Array<Int>(q, { 0 })
    for (i in 0 until q) {
        val queriesItem = readLine()!!.trim().toInt()
        queries[i] = queriesItem
    }

    val result = circularArrayRotation(a, k, queries)

    println(result.joinToString("\n"))
}
