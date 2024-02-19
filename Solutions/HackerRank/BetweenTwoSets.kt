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
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

fun getTotalX(a: Array<Int>, b: Array<Int>): Int {    
    var total = 0
    var n = 1
    val max = maxOf(a.max(), b.max())
    
    while(n <= max) {
        var countA = 0
        var applyToA = false
        
        for(i in 0..a.size-1) {
            if(n % a[i] == 0) countA++
        }
        
        if(countA == a.size) applyToA = true
        
        var countB = 0
        var applyToB = false
        
        for(i in 0..b.size-1) {
            if(b[i] % n == 0) countB++
        }
        
        if(countB == b.size) applyToB = true
        
        if(applyToA && applyToB) total++
        
        n++
    }
    
    return total
}

fun main(args: Array<String>) {
    val first_multiple_input = readLine()!!.trimEnd().split(" ")

    val n = first_multiple_input[0].toInt()

    val m = first_multiple_input[1].toInt()

    val arr = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val brr = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val total = getTotalX(arr, brr)

    println(total)
}
