import java.io.*
import java.util.*

fun main(args: Array<String>) {
    val matrixA: Array<IntArray> = arrayOf(
        intArrayOf(1, 2, 3),
        intArrayOf(2, 3, 4),
        intArrayOf(1, 1, 1),        
    )
    val matrixB: Array<IntArray> = arrayOf(
        intArrayOf(4, 5, 6),
        intArrayOf(7, 8, 9),
        intArrayOf(4, 5, 7),        
    )
    
    for(i in 0 until matrixA.size) {
        for(j in 0 until matrixA[0].size) {
            println(matrixA[i][j] + matrixB[i][j])
        }
    }
}
