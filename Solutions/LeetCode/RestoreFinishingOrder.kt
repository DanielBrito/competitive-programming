class Solution {
    fun recoverOrder(order: IntArray, friends: IntArray): IntArray {
        val result = IntArray(friends.size)
        var friendPosition = 0

        for(participant in order) {
            for(friend in friends) {
                if(participant == friend) {
                    result[friendPosition++] = participant
                }
            }
        }

        return result
    }
}

/*
// Using set also works, but with degraded performance:

class Solution {
    fun recoverOrder(order: IntArray, friends: IntArray): IntArray {
        val orderSet = order.toSet()
        val friendsSet = friends.toSet()
        val result = orderSet.intersect(friendsSet)

        return result.toIntArray()
    }
}
*/
