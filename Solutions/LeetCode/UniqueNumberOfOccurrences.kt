class Solution {
    fun uniqueOccurrences(arr: IntArray): Boolean {
        val map = mutableMapOf<Int, Int>()

        arr.forEach {
            if(map.containsKey(it)) map.merge(it, 1) { oldValue, _ -> oldValue + 1 }
            else map.put(it, 1)
        }

        return map.values.size == map.values.toSet().size
    }
}
