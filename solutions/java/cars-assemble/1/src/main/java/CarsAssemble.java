public class CarsAssemble {

    public static final double carsProducedPerHour = 221.0;  
    
    public double productionRatePerHour(int speed) {
        if(speed <= 4){
            return speed * carsProducedPerHour;
        }
        else if(speed <= 8){
            return speed * carsProducedPerHour * 0.9;
        }
        else if(speed == 9){
          return speed * carsProducedPerHour * 0.8;  
        }
        else if(speed == 10){
          return speed * carsProducedPerHour * 0.77;  
        }
        else{
            return 0;
        }
    }

    public int workingItemsPerMinute(int speed) {
        return (int) this.productionRatePerHour(speed)/60;
    }
}
