class Solution {
    fun removeDuplicates(nums: IntArray): Int {
        // Replace duplicated values with 999:

        var lastElementFromSequence = nums[0]

        for(i in 1..nums.size-1) {
            if(nums[i] == lastElementFromSequence) {
                nums[i] = 999
            } else {
                lastElementFromSequence = nums[i]
            }
        }

        // Shift sequential values to its correct position:

        var nextElementPosition = 0

        for(i in 0..nums.size-1) {
            if(nums[i] != 999) {
                nums[nextElementPosition] = nums[i]
                nextElementPosition++
            }
        }

        // Replace remaining values after the sequence with 999:

        for(i in nextElementPosition..nums.size-1) {
            nums[i] = 999
        }

        // Filter just the values from que sequence:

        val uniqueValues = nums.filter {it != 999}

        return uniqueValues.size
    }
}
