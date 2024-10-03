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
 * Complete the 'divisors' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

fun divisors(n: Int): Int {
    if(n % 2 == 1) return 0
    
    var countDivisors = 0
    
    for(i in 1..upperBound(n)) {
        if(n % i == 0) {
            if(i % 2 == 0) {
                countDivisors++
            }
            
            val pairDivisor = n / i
            
            if(pairDivisor != i && pairDivisor % 2 == 0) {
                countDivisors++                
            }
        }
    }
    
    return countDivisors
}

/*
Hint:
Divisors come in pairs, so for any divisor d of N, there is another divisor N/d.
Therefore, we just need to iterate up to √N to find all divisors.
*/
private fun upperBound(n: Int): Int {
    return sqrt(n.toDouble()).toInt()
}

fun main(args: Array<String>) {
    val t = readLine()!!.trim().toInt()

    for (tItr in 1..t) {
        val n = readLine()!!.trim().toInt()

        val result = divisors(n)

        println(result)
    }
}
