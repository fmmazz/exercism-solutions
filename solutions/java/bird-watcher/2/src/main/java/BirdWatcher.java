
class BirdWatcher {
    private final int[] birdsPerDay;

    public BirdWatcher(int[] birdsPerDay) {
        this.birdsPerDay = birdsPerDay.clone();
    }

    public int[] getLastWeek() {
        return this.birdsPerDay;
    }

    public int getToday() {
        if(this.birdsPerDay.length == 0){
            return 0;
        }
        else{
            return this.birdsPerDay[this.birdsPerDay.length-1];
        }
    }

    public void incrementTodaysCount() {
        this.birdsPerDay[this.birdsPerDay.length-1] += 1;
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
        int minDays = Math.min(numberOfDays, this.birdsPerDay.length);

        for(int i = 0; i < minDays; i++){
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
