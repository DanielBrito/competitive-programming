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
 * Complete the 'calculate' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER x as parameter.
 */

fun calculate(x: Int): Int {
   return x % 11
}

fun main(args: Array<String>) {
    val x = readLine()!!.trim().toInt()

    val result = calculate(x)

    println(result)
}
