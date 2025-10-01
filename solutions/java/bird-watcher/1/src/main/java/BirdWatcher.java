
class BirdWatcher {
    private final int[] birdsPerDay;

    public BirdWatcher(int[] birdsPerDay) {
        this.birdsPerDay = birdsPerDay.clone();
    }

    public int[] getLastWeek() {
        return this.birdsPerDay;
    }

    public int getToday() {
        return this.birdsPerDay[-1];
    }

    public void incrementTodaysCount() {
        this.birdsPerDay[-1] += 1;
    }

    public boolean hasDayWithoutBirds() {
        for(int day:this.birdsPerDay){
            if(day == 0){
                return true;
            }
        }
        return false;
    }

    public int getCountForFirstDays(int numberOfDays) {
        int sum = 0;

        for(int i = 0; i < numberOfDays; i++){
            sum += this.birdsPerDay[i];
        }

        return sum;
    }

    public int getBusyDays() {
        int busyDays = 0;
        for(int day:this.birdsPerDay){
            if(day >= 5){
                busyDays += 1;
            }
        }
        return busyDays;
    }
}
