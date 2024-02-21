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
 * Complete the 'permutationEquation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY p as parameter.
 */
 
fun permutationEquation(p: Array<Int>): Array<Int> {
    val result = mutableListOf<Int>()
    val n = p.size
    
    for(i in 1..n) {
        val a = p.indexOf(i) + 1
        val b = p.indexOf(a) + 1
        
        result.add(b)
    }    
    
    return result.toTypedArray()
}

fun main(args: Array<String>) {
    val n = readLine()!!.trim().toInt()

    val p = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()

    val result = permutationEquation(p)

    println(result.joinToString("\n"))
}
