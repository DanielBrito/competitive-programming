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
    val firstNames = mutableListOf<String>()

    for (NItr in 1..N) {
        val first_multiple_input = readLine()!!.trimEnd().split(" ")
        val firstName = first_multiple_input[0]
        val emailID = first_multiple_input[1]
        
        val regex = "^[a-z|.]+@gmail\\.com$".toRegex()
        
        if(regex.matches(emailID)) {
            firstNames.add(firstName)
        }
    }
    
    firstNames.sort()
    
    firstNames.forEach { firstName -> 
        println(firstName)
    }
}
