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



fun main(args: Array<String>) {
    val n = readLine()!!.trim().toInt()
    
    val divisorsSum = mutableMapOf<Int, Int>()
    var maxSum = 0
    var maxDivisor = 0
    
    for(i in 1..n) {
        if(n % i == 0) {
            val digitsSum = sumDigits(i)
            val current = divisorsSum.get(digitsSum)
            
            if(current == null) {
                divisorsSum.put(digitsSum, i) 
            }
            
            if(digitsSum > maxSum) {
                maxSum = digitsSum
                maxDivisor = i
            }
        }
    }
    
    println(maxDivisor)
}

private fun sumDigits(num: Int): Int {
    if(num <= 9) return num
    
    val lastDigit = num % 10
    
    return lastDigit + sumDigits(num / 10)
}
