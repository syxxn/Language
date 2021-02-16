import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        Integer[] arr = new Integer[n];
        double sum = 0;

        for(int i = 0 ; i < n ; i++) {
            arr[i] = scanner.nextInt();
        }

        Arrays.sort(arr, Collections.reverseOrder()); // 내림차순 정렬, 오름차순 정렬은 Arrays.sort(배열);

        for(int i = 0 ; i < n ; i++) {
            sum += (double)arr[i]/arr[0]*100;
        }

        System.out.println(sum/n);
    }

}
