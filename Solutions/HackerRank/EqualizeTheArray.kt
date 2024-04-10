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
 * Complete the 'equalizeArray' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

fun equalizeArray(arr: Array<Int>): Int {
    val elementsAmount = mutableMapOf<Int, Int>()
    
    arr.forEach { element ->
        val currentAmount = elementsAmount.getOrDefault(element, 0)
        elementsAmount.put(element, currentAmount + 1)
    }
    
    val maxElements = elementsAmount.maxBy { it.value }
    val diff = arr.size - maxElements.value
    
    return diff
}

fun main(args: Array<String>) {
    val n = readLine()!!.trim().toInt()

    val arr = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val result = equalizeArray(arr)

    println(result)
}
