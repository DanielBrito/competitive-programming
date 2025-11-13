import java.io.*
import java.util.*

fun main(args: Array<String>) {
    var testCases = readLine()!!.toInt()
    
    while(testCases > 0) {
        var word = readLine()!!
        
        var evenIndexesLetters = ""
        var oddIndexesLetters = ""
        
        for((index, letter) in word.withIndex()) {
            if(index % 2 == 0) evenIndexesLetters += letter
            else oddIndexesLetters += letter
        }
        
        println("$evenIndexesLetters $oddIndexesLetters")
        
        testCases--
    }  
}
