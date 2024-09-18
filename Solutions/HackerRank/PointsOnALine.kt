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
    val scan = Scanner(System.`in`)
    val n = scan.nextLine().trim().toInt()
    
    val xSet = mutableSetOf<Int>()
    val ySet = mutableSetOf<Int>()

    for (nItr in 1..n) {
        val xy = scan.nextLine().split(" ")

        val x = xy[0].trim().toInt()
        val y = xy[1].trim().toInt()
        
        xSet.add(x)
        ySet.add(y)
    }
    
    if(xSet.size == 1 || ySet.size == 1) println("YES")
    else println("NO")
}
