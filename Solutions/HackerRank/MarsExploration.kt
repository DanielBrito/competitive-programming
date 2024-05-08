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
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

fun marsExploration(s: String): Int {
    val sos = "SOS"
    var positionSOS = 0
    var countError = 0
    
    for(i in 0..s.length-1) {
        if(s[i] != sos[positionSOS++]) {
            countError++
        }
        
        if(positionSOS == 3) positionSOS = 0
    }
    
    return countError
}

fun main(args: Array<String>) {
    val s = readLine()!!

    val result = marsExploration(s)

    println(result)
}
