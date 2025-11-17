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



fun main(args: Array<String>) {
    var n = readLine()!!.trim().toInt()
    var consecutiveOnesCount = 0
    var maxConsecutiveOnesCount = 0
    
    do {
        val remainder = n % 2
        
        if(remainder == 1) {
            ++consecutiveOnesCount
            
            if(consecutiveOnesCount > maxConsecutiveOnesCount) {
                maxConsecutiveOnesCount = consecutiveOnesCount
            }
        }
        else {
            consecutiveOnesCount = 0
        } 
        
        n /= 2
    } while(n > 0)
    
    println(maxConsecutiveOnesCount)
}
