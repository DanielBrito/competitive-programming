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
 * Complete the 'squares' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER a
 *  2. INTEGER b
 */

fun squares(a: Int, b: Int): Int {
    // It does not work for very large ranges (timeout):
  
    var countSquares = 0
    
    for(i in a..b) {
        if(Math.sqrt(i.toDouble()) % 1 == 0.0) countSquares++
    }
    
    return countSquares
}

fun main(args: Array<String>) {
    val q = readLine()!!.trim().toInt()

    for (qItr in 1..q) {
        val first_multiple_input = readLine()!!.trimEnd().split(" ")

        val a = first_multiple_input[0].toInt()

        val b = first_multiple_input[1].toInt()

        val result = squares(a, b)

        println(result)
    }
}
