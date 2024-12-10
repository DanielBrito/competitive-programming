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
 * Complete the 'strangeGrid' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER r
 *  2. INTEGER c
 */
 
 // This first version of my solution is also passing
fun strangeGridLoop(r: Int, c: Int): Long {
    var base: Long = (c * 2 - 2).toLong()
    var result: Long = base
    
    for(i in 2..r) {
        if(i % 2 == 0) result += 1
        else result += 9
    }
    
    return result
}

// Optimized solution using maths
fun strangeGrid(r: Int, c: Int): Long {
    var base: Long = (c * 2 - 2).toLong()
    
    return if(r % 2 == 0) base + 1 + 10 * ((r - 1) / 2).toLong()
    else base + 10 * (r / 2).toLong()
}

fun main(args: Array<String>) {
    val first_multiple_input = readLine()!!.trimEnd().split(" ")

    val r = first_multiple_input[0].toInt()

    val c = first_multiple_input[1].toInt()

    val result = strangeGrid(r, c)

    println(result)
}
