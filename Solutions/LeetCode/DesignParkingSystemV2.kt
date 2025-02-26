class ParkingSystem(big: Int, medium: Int, small: Int) {

    private var spots = IntArray(4) 

    init {
        spots[1] = big
        spots[2] = medium
        spots[3] = small
    }

    fun addCar(carType: Int): Boolean {
        spots[carType] -= 1
        return spots[carType] >= 0
    }
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * var obj = ParkingSystem(big, medium, small)
 * var param_1 = obj.addCar(carType)
 */
 
