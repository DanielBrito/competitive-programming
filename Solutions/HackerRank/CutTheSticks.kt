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
 * Complete the 'cutTheSticks' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

fun cutTheSticks(arr: Array<Int>): Array<Int> {
    val numberOfSticks = arr.size
    val newArr = arr.copyOf()
    var countZeroLength: Int
    val result = mutableListOf<Int>()
    
    do {
        val smallest = newArr.filter { it != 0}.minBy { it }
        var countCuts = 0
        
        for(i in 0..numberOfSticks-1) {            
            if(newArr[i] >= 1) {
                newArr[i] -= smallest
                countCuts++
            }
        }
        
        result.add(countCuts)
        countZeroLength = newArr.count { it == 0 }
    } while(countZeroLength != numberOfSticks)

    return result.toTypedArray()
}

fun main(args: Array<String>) {
    val n = readLine()!!.trim().toInt()

    val arr = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val result = cutTheSticks(arr)

    println(result.joinToString("\n"))
}
