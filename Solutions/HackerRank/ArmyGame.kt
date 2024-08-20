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
import kotlin.math.*

/*
 * Complete the 'gameWithCells' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

fun gameWithCells(n: Int, m: Int): Int {
    if(n == 1 && m == 1) return 1
    if(n == 1 && m > 1) return ceil(m/2.0).toInt()
    if(m == 1 && n > 1) return ceil(n/2.0).toInt()
    
    return ceil(m/2.0).toInt() + (ceil(m/2.0).toInt() * ceil(n/2.0).toInt() - ceil(m/2.0).toInt())
}

fun main(args: Array<String>) {
    val first_multiple_input = readLine()!!.trimEnd().split(" ")

    val n = first_multiple_input[0].toInt()

    val m = first_multiple_input[1].toInt()

    val result = gameWithCells(n, m)

    println(result)
}
