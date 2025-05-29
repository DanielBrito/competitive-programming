class Solution {
    fun interpret(command: String): String {
        var result = ""
        var currentCharIdx = 0

        while(currentCharIdx <= command.length - 1) {
            if(command[currentCharIdx] == 'G' || command[currentCharIdx + 1] == 'G') {
                result += "G"
                currentCharIdx++
                continue
            }

            if(command[currentCharIdx] == '(' && command[currentCharIdx + 1] == ')') {
                result += "o"
                currentCharIdx += 2
                continue
            }

            if(command[currentCharIdx] == '(' && command[currentCharIdx + 1] == 'a') {
                result += "al"
                currentCharIdx += 4
            }
        }

        return result
    }
}
