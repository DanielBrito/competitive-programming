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
 * Complete the 'chocolateFeast' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER c
 *  3. INTEGER m
 */

fun chocolateFeast(n: Int, c: Int, m: Int): Int {
    var currentWrappers: Int
    var barsEaten: Int
    
    barsEaten = n / c
    currentWrappers = barsEaten    
    
    do {
        val newBars = currentWrappers / m

        barsEaten += newBars
        currentWrappers += newBars
        currentWrappers -= newBars * m
    } while(currentWrappers >= m)
    
    return barsEaten
}

fun main(args: Array<String>) {
    val t = readLine()!!.trim().toInt()

    for (tItr in 1..t) {
        val first_multiple_input = readLine()!!.trimEnd().split(" ")

        val n = first_multiple_input[0].toInt()

        val c = first_multiple_input[1].toInt()

        val m = first_multiple_input[2].toInt()

        val result = chocolateFeast(n, c, m)

        println(result)
    }
}
