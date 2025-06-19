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
 * Complete the 'beautifulTriplets' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

fun beautifulTriplets(d: Int, arr: Array<Int>): Int {
    var result = 0
    var n = arr.size
    
    for(i in 0 until n) {
        val left = arr[i]
        
        for(j in i + 1 until n) {
            val middle = arr[j]
            
            if(middle - left == d) {
                for(k in j + 1 until n) {
                    val right = arr[k]
                    
                    if(right - middle == d) {
                        result++
                        continue
                    }
                }
            } else { 
                continue
            }
        }
    }
    
    return result
}

fun main(args: Array<String>) {
    val first_multiple_input = readLine()!!.trimEnd().split(" ")

    val n = first_multiple_input[0].toInt()

    val d = first_multiple_input[1].toInt()

    val arr = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val result = beautifulTriplets(d, arr)

    println(result)
}
