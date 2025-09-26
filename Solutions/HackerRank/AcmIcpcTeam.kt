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
 * Complete the 'acmTeam' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY topic as parameter.
 */

fun acmTeam(topic: Array<String>): Array<Int> {
    val result: Array<Int> = Array(2) { 0 }
    val numberOfMembers = topic.size
    val numberOfTopics = topic.first().length
    var maxNumberOfTopicsKnown = 0
    var numberOfTeamsWithMaxKnowledge = 0
    
    for(i in 0 until numberOfMembers) {
        for(j in i + 1 until numberOfMembers) {
            var teamKnowledge = 0
            
            for(k in 0 until numberOfTopics) {
                if(topic[i][k] == '1' || topic[j][k] == '1') {
                    teamKnowledge++
                }
            }
            
            if(teamKnowledge > maxNumberOfTopicsKnown) {
                maxNumberOfTopicsKnown = teamKnowledge
                numberOfTeamsWithMaxKnowledge = 1
            } else if(teamKnowledge == maxNumberOfTopicsKnown) {
                numberOfTeamsWithMaxKnowledge++
            }
        }
    }
    
    result[0] = maxNumberOfTopicsKnown
    result[1] = numberOfTeamsWithMaxKnowledge
    
    return result
}

fun main(args: Array<String>) {
    val first_multiple_input = readLine()!!.trimEnd().split(" ")

    val n = first_multiple_input[0].toInt()

    val m = first_multiple_input[1].toInt()

    val topic = Array<String>(n, { "" })
    for (i in 0 until n) {
        val topicItem = readLine()!!
        topic[i] = topicItem
    }

    val result = acmTeam(topic)

    println(result.joinToString("\n"))
}
