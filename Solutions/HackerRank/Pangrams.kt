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
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

fun pangrams(s: String): String {
    val alphabetCount = ('a'..'z').toList().associateWith { 0 }.toMutableMap()
    
    for(ch in s.lowercase()) {
        if(ch != ' ') {
            val currentAmount = alphabetCount.getOrDefault(ch, 0)
            alphabetCount.put(ch, currentAmount + 1)
        }
    }
    
    val countNoLettersOccurrences = alphabetCount.filterValues { it == 0 }
    
    return if (countNoLettersOccurrences.size >= 1) "not pangram"
    else "pangram"
}

fun main(args: Array<String>) {
    val s = readLine()!!

    val result = pangrams(s)

    println(result)
}
