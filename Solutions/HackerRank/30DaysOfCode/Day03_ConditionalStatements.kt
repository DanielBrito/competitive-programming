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
    val N = readLine()!!.trim().toInt()
    
    val result = if(isWierd(N)) "Weird" else "Not Weird"
    
    println(result)
}

private fun Int.isEven() = this % 2 == 0

private fun isWierd(n: Int): Boolean {
    return !n.isEven() || n.isEven() && n in 6..20
}
