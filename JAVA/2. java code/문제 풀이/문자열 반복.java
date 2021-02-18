import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int testNum = scanner.nextInt();

        int[] repetitionNum = new int[testNum];
        String[] str = new String[testNum];

        for(int i = 0; i < testNum; i++) {
            repetitionNum[i] = scanner.nextInt();
            str[i] = scanner.next();
        }

        for(int i = 0; i < testNum; i++) { //테스트 케이스의 개수
           for(int k = 0; k < str[i].length(); k++) { // i번째 문자열의 길이만큼 반복
               for(int j = 0; j < repetitionNum[i]; j++) { // i번째 테스트 케이스의 반복횟수만큼 출력
                    System.out.print(str[i].charAt(k)); // i번째 문자열의 k번째 문자 출력
                }
           }
            System.out.println();
        }

        scanner.close();
    }

}
