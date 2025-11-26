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
    val n = readLine()!!.trim().toInt()
    val a = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()
    
    var numberOfSwaps = 0;

    for(i in 0 until n) {
        for(j in 0 until n - 1) {
            if(a[j] > a[j + 1]) {
                val temp = a[j + 1]
                a[j + 1] = a[j]
                a[j] = temp
                
                numberOfSwaps++
            }
        }
        
        if(numberOfSwaps == 0) break;
    }
    
    println("Array is sorted in $numberOfSwaps swaps.")
    println("First Element: ${a[0]}")
    println("Last Element: ${a[n - 1]}")
}
