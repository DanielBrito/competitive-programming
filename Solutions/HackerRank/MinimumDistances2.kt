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
    var valuesDistances = mutableMapOf<Int, Pair<Int, Int>>()
    
    for(i in 0 until a.size) {        
        val current = valuesDistances.get(a[i])
        
        if(current == null) {
            valuesDistances.put(a[i], Pair(i, -1))
        } else {
            val (firstIndex, secondIndex) = current
            
            if(secondIndex != -1) continue
            
            valuesDistances.put(a[i], Pair(firstIndex, i))
        }
    }
    
    for(value in valuesDistances.values) {
        if(value.second == -1) continue
        
        val distance = Math.abs(value.first - value.second)
        
        if(distance < minDistance) minDistance = distance
    }
    
    return if (minDistance == Int.MAX_VALUE) -1 else minDistance
}

fun main(args: Array<String>) {
    val n = readLine()!!.trim().toInt()

    val a = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val result = minimumDistances(a)

    println(result)
}
