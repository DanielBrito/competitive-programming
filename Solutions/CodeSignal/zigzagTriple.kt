fun solution(numbers: MutableList<Int>): MutableList<Int> {
    val solution = mutableListOf<Int>()
  
    for(i in 0 until numbers.size - 2) {
        if((numbers[i] < numbers[i + 1] && numbers[i + 1] > numbers[i + 2]) || (numbers[i] > numbers[i + 1] && numbers[i + 1] < numbers[i + 2])) {
            solution.add(1)
        } else {
            solution.add(0)
        }
    }
  
  return solution
}
