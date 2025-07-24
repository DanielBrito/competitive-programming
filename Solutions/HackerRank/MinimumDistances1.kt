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
 * Complete the 'minimumDistances' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

fun minimumDistances(a: Array<Int>): Int {
    var minDistance = Int.MAX_VALUE
    val n = a.size
    
    for(i in 0 until n - 1) {        
        for(j in i + 1 until n) {
            if(a[i] == a[j]) {
                val distance = j - i
                if(distance < minDistance) minDistance = distance
                break
            }
        }
    }
    
    return if (minDistance == Int.MAX_VALUE) -1 else minDistance
}

fun main(args: Array<String>) {
    val n = readLine()!!.trim().toInt()

    val a = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val result = minimumDistances(a)

    println(result)
}
