import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        int m = a * b * c;
        String multi = String.valueOf(m); //String.valueOf는 자료형이 String이 아닌 것을 String으로 만들어준다.
        String[] s = multi.split(""); //String.split("")은 한 자리마다 잘라서 배열에 넣어준다.

        int[] num = new int[10]; //9의 크기를 가지고 초깃값 0으로 채워진 배열 생성

        for(String str : s) {
            switch (str) {
                case "0": num[0]++; break;
                case "1": num[1]++; break;
                case "2": num[2]++; break;
                case "3": num[3]++; break;
                case "4": num[4]++; break;
                case "5": num[5]++; break;
                case "6": num[6]++; break;
                case "7": num[7]++; break;
                case "8": num[8]++; break;
                case "9": num[9]++; break;
            }
        }

        for(int i : num) {
            System.out.println(i);
        }
    }

}
