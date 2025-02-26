class ParkingSystem(big: Int, medium: Int, small: Int) {

    var availableBig = big
    var availableMedium = medium
    var availableSmall = small

    fun addCar(carType: Int): Boolean {
        if(carType == 1) {
            return if(availableBig > 0) {
                availableBig--
                true
            } else false
        }

        if(carType == 2) {
            return if(availableMedium > 0) {
                availableMedium--
                true
            } else false
        }

        if(carType == 3) {
            return if(availableSmall > 0) {
                availableSmall--
                true
            } else false
        }

        return false
    }
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * var obj = ParkingSystem(big, medium, small)
 * var param_1 = obj.addCar(carType)
 */
 
