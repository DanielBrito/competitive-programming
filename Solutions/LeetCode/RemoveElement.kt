class Solution {
    fun removeElement(nums: IntArray, `val`: Int): Int {
        val countDiffElements = nums.count { it != `val` }
        val n = nums.size

        if(countDiffElements == 0) return 0
        if(countDiffElements == n) return n

        var currentPointer = 0
        val predicate: (Int) -> Boolean = { it != `val` }
        var endPointer = nums.indexOfLast { predicate(it) }

        do {
            if(nums[currentPointer] == `val`) {
                var valEndPointer = nums[endPointer]
                
                nums[endPointer] = `val`
                nums[currentPointer] = valEndPointer

                endPointer--

                while(nums[endPointer] == `val`) endPointer--
            }

            currentPointer++

        } while(currentPointer <= endPointer)

        return countDiffElements
    }
}
