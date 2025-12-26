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

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

fun makingAnagrams(s1: String, s2: String): Int {
    val s1LetterCount = ('a'..'z').associateWith { 0 }.toMutableMap()
    val s2LetterCount = ('a'..'z').associateWith { 0 }.toMutableMap()
    
    for(ch in s1) {
        s1LetterCount[ch] = s1LetterCount[ch]!!.plus(1)
    }
    
    for(ch in s2) {
        s2LetterCount[ch] = s2LetterCount[ch]!!.plus(1)
    }
    
    var result = 0
    
    s1LetterCount.values.zip(s2LetterCount.values).forEach{ pair -> 
        result += abs(pair.first - pair.second)
    }

    return result
}

fun main(args: Array<String>) {
    val s1 = readLine()!!

    val s2 = readLine()!!

    val result = makingAnagrams(s1, s2)

    println(result)
}
