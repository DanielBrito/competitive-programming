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
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

fun pickingNumbers(a: Array<Int>): Int {
    var maximumLength = 0
    var countSequenceElements = 0
    var sortedArray = a.sorted()
    var startSegment = 0
    
    for(i in 0..sortedArray.size-1) {
        if(Math.abs(sortedArray[startSegment]-sortedArray[i]) <= 1) {
            countSequenceElements++
        } else {
            startSegment = i
            countSequenceElements = 1
        }
        
        if(countSequenceElements > maximumLength) {
            maximumLength = countSequenceElements
        }
    }
    
    return maximumLength
}

fun main(args: Array<String>) {
    val n = readLine()!!.trim().toInt()

    val a = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val result = pickingNumbers(a)

    println(result)
}
