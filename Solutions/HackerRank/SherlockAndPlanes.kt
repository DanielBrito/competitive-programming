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
 * Complete the 'solve' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts 2D_INTEGER_ARRAY points as parameter.
 */

fun solve(points: Array<Array<Int>>): String {
    var countRow = 0
    var countColumn = 0
    
    for(i in 0 until 4) {
        val initialCoordinate = points[i][0]
        
        for(j in 0 until 3) {
            if(points[i][j] == initialCoordinate) countRow++
        }
        
        if(countRow == 3) return "YES"
        else countRow = 0
    }
    
    for(i in 0 until 3) {
        val initialCoordinate = points[0][i]
        
        for(j in 0 until 4) {
            if(points[j][i] == initialCoordinate) countColumn++
        }
        
        if(countColumn == 4) return "YES"
        else countColumn = 0
    }
    
    return "NO"
}

fun main(args: Array<String>) {
    val t = readLine()!!.trim().toInt()

    for (tItr in 1..t) {

        val points = Array<Array<Int>>(4, { Array<Int>(3, { 0 }) })

        for (i in 0 until 4) {
            points[i] = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()
        }

        val result = solve(points)

        println(result)
    }
}
