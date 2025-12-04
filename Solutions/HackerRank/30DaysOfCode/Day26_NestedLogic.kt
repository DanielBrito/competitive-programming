import java.io.*
import java.util.*

fun main(args: Array<String>) {
    val (dayReturned, monthReturned, yearReturned) = readLine()!!.split(" ").map { it.toInt() }
    val (dayDue, monthDue, yearDue) = readLine()!!.split(" ").map { it.toInt() }
    
    if(yearReturned < yearDue) {
        println("0")
    }
    
    if(yearReturned == yearDue) {
        if(monthReturned < monthDue) {
            println("0")
        }
        
        if(monthReturned == monthDue) {
            if(dayReturned > dayDue) {
                println((dayReturned - dayDue) * 15)
            } else {
                println("0")
            }
        }
        
        if(monthReturned > monthDue) {
            println((monthReturned - monthDue) * 500)
        }
        
    }
    
    if(yearReturned > yearDue) {
        println("10000")
    }
}
