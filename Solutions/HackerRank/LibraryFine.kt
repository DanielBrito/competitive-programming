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
 * Complete the 'libraryFine' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d1
 *  2. INTEGER m1
 *  3. INTEGER y1
 *  4. INTEGER d2
 *  5. INTEGER m2
 *  6. INTEGER y2
 */

fun libraryFine(d1: Int, m1: Int, y1: Int, d2: Int, m2: Int, y2: Int): Int {    
    if(y1 > y2) return 10000
    else if(y1 >= y2 && m1 > m2) return abs(m2 - m1) * 500
    else if(y1 >= y2 && m1 >= m2 && d1 > d2) return abs(d2 - d1) * 15
    
    return 0
}

fun main(args: Array<String>) {
    val first_multiple_input = readLine()!!.trimEnd().split(" ")

    val d1 = first_multiple_input[0].toInt()

    val m1 = first_multiple_input[1].toInt()

    val y1 = first_multiple_input[2].toInt()

    val second_multiple_input = readLine()!!.trimEnd().split(" ")

    val d2 = second_multiple_input[0].toInt()

    val m2 = second_multiple_input[1].toInt()

    val y2 = second_multiple_input[2].toInt()

    val result = libraryFine(d1, m1, y1, d2, m2, y2)

    println(result)
}
