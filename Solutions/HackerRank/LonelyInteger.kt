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
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

fun lonelyinteger(a: Array<Int>): Int {
    val counter = mutableMapOf<Int, Int>()
    
    for(i in 0..a.size-1) {
        val currentAmount = counter.getOrDefault(a[i], 0)
        counter.put(a[i], currentAmount + 1)
    }
    
    return counter.entries.find { it.value == 1 }!!.key
}

fun main(args: Array<String>) {
    val n = readLine()!!.trim().toInt()

    val a = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val result = lonelyinteger(a)

    println(result)
}
