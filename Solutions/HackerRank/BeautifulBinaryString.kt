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
 * Complete the 'beautifulBinaryString' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING b as parameter.
 */

fun beautifulBinaryString(b: String): Int {
    var result = 0
    val substr = "010"
    val charB = b.toCharArray()
    var index = b.indexOf(substr)
    
    while(index != -1) {
        ++result
        
        charB[index+2] = if(charB[index+1] == '1') '1' else '0'
        
        index = String(charB).indexOf(substr)
    }
    
    return result
}

fun main(args: Array<String>) {
    val n = readLine()!!.trim().toInt()

    val b = readLine()!!

    val result = beautifulBinaryString(b)

    println(result)
}
