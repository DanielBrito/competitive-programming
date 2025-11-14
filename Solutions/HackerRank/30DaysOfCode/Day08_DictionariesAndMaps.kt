import java.io.*
import java.util.*

fun main(args: Array<String>) {
    var phoneBook = mutableMapOf<String, String>()
    var n = readLine()!!.toInt()
    
    while(n > 0) {
        val entry = readLine()!!
        val (name, phone) = entry.split(" ")
        
        phoneBook.put(name, phone)
        
        n--
    }
    
    while(true) {
        val name = readLine()
        
        if(name == null) return
        
        val result = phoneBook[name]
        
        if(result == null) println("Not found")
        else println("$name=$result")
    }
    
}
