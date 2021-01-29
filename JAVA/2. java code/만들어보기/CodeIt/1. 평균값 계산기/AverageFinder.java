public class AverageFinder {
    double computeAverage(int[] intArray) {
        // 코드를 입력하세요.
        double sum=0;
        int a=intArray.length;
        for(int i:intArray){
            sum+=i;
        }
        double avg=sum/a;
        return avg;
    }
}
