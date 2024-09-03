import java.io.*
import java.util.*

fun main(args: Array<String>) {
    val matrixA: Array<IntArray> = arrayOf(
        intArrayOf(1, 2),
        intArrayOf(2, 3)
    )
    val matrixB: Array<IntArray> = arrayOf(
        intArrayOf(4, 5),
        intArrayOf(7, 8)
    )
    var sum = 0
    
    for(i in 0 until matrixA.size) {
        for(j in 0 until matrixB[0].size) {
            for(k in 0 until matrixA[0].size) {
                sum += matrixA[i][k] * matrixB[k][j]
            }
            
            println(sum)
            sum = 0
        }
    }
}
