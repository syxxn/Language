public class GreatestDifferenceFinder {
    int greatestDifference(int[] intArray) {
        int l=intArray.length;
        if(l<=2) return 0;
        int max=-100,min=100;
        for(int i:intArray){
            if(max<i)max=i;
            if(min>i)min=i;
        }
        return max-min;
    }
}
