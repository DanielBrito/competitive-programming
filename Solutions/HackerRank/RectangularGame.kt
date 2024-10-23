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
 * Complete the 'solve' function below.
 *
 * The function is expected to return an INTEGER. -> WRONG! Large numbers cause overflow.
 * The function accepts 2D_INTEGER_ARRAY steps as parameter.
 */

fun solve(steps: Array<Array<Int>>): Long {
    var minVerticalStep = Int.MAX_VALUE
    var minHorizontalStep = Int.MAX_VALUE
    
    steps.forEach { step ->
        minVerticalStep = min(minVerticalStep, step[0])
        minHorizontalStep = min(minHorizontalStep, step[1])
    }
    
    return minVerticalStep.toLong() * minHorizontalStep.toLong()
}

fun main(args: Array<String>) {
    val n = readLine()!!.trim().toInt()

    val steps = Array<Array<Int>>(n, { Array<Int>(2, { 0 }) })

    for (i in 0 until n) {
        steps[i] = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()
    }

    val result = solve(steps)

    println(result)
}
