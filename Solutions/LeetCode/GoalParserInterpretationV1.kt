class Solution {
    fun interpret(command: String): String {
        return command
            .replace("()", "o")
            .replace("(al)", "al")
    }
}
