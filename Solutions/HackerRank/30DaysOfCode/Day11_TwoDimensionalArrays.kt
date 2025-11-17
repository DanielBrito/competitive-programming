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
    val arr = Array<Array<Int>>(6, { Array<Int>(6, { 0 }) })
    var maximumSum = Int.MIN_VALUE

    for (i in 0 until 6) {
        arr[i] = readLine()!!
            .trimEnd()
            .split(" ")
            .map{ it.toInt() }
            .toTypedArray()
    }
    
    var topRowIndex = 0
    var topColumnIndex = 0
    var middleRowIndex = 1
    var middleColumnIndex = 1
    var bottomRowIndex = 2
    var bottomColumnIndex = 0
    
    while(topColumnIndex + 2 < 6 && bottomRowIndex < 6) {        
        val topSum = arr[topRowIndex][topColumnIndex] + arr[topRowIndex][topColumnIndex + 1] + arr[topRowIndex][topColumnIndex + 2]
        val middle = arr[middleRowIndex][middleColumnIndex]
        val bottomSum = arr[bottomRowIndex][bottomColumnIndex] + arr[bottomRowIndex][bottomColumnIndex + 1] + arr[bottomRowIndex][bottomColumnIndex + 2]
        
        val hourglassSum = topSum + middle + bottomSum
        
        maximumSum = max(maximumSum, hourglassSum)

        if(topColumnIndex + 3 == 6) {
            topRowIndex++
            topColumnIndex = 0
            middleRowIndex++
            middleColumnIndex = 1
            bottomRowIndex++
            bottomColumnIndex = 0
        } else {
            topColumnIndex++
            middleColumnIndex++
            bottomColumnIndex++
        }
    }
    
    println(maximumSum)
}
