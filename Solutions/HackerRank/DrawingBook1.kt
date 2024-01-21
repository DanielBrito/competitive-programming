import java.io.*
import java.math.*
import kotlin.math.min
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
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

fun pageCount(n: Int, p: Int): Int {
    if(n == p) return 0
    
    var turningsLtoR = countTurningsFromLeftToRight(n, p)
    var turningsRtoL = countTurningsFromRightToLeft(n, p)
    
    return min(turningsLtoR, turningsRtoL)
}

private fun countTurningsFromLeftToRight(n: Int, p: Int): Int {
    var turnings = 0
    
    for(currentPage in 1..n step 2) {
        if(currentPage != p && currentPage-1 != p) turnings++
        else break
    }
    
    return turnings
}

private fun countTurningsFromRightToLeft(n: Int, p: Int): Int {
    var turnings = 0
    
    if(n % 2 == 0) {
        ++turnings
    
        for(currentPage in n-1 downTo 1 step 2) {
            if(currentPage != p && currentPage-1 != p) ++turnings
            else break
        }
    } else {
        for(currentPage in n downTo 1 step 2) {
            if(currentPage != p && currentPage-1 != p) ++turnings
            else break
        }
    }
    
    return turnings
}

fun main(args: Array<String>) {
    val n = readLine()!!.trim().toInt()

    val p = readLine()!!.trim().toInt()

    val result = pageCount(n, p)

    println(result)
}
