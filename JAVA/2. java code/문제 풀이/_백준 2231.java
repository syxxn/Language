import java.util.Scanner;

//https://www.acmicpc.net/problem/2231

public class Q2231 {
    public static void main(String[] args) {
        //입력받기
        Scanner scanner = new Scanner(System.in);

        //자릿수를 쉽게 구하기 위해서 String으로 받음
        String n = scanner.next();
        int num = Integer.parseInt(n);

        //생성자의 최소값은 (자연수) - (자연수의 자리수) * 9 이다.
        int min = num - n.length() * 9;

        //생성자가 없는 경우에는 0을 출력한다. -> 기본값 0
        int constructor = 0;

        //최소값부터 +1을 하며 분해합이 자연수 n인 수가 있는지 찾는다.
        for(int i = min; i <= num; i++) {
            int sum = sum(i);

            //sum함수의 결과값이 자연수 n이 됐을 때, 생성자 변수에 값을 저장하고 반복문을 종료한다.
            if(sum == num) {
                constructor = i;
                break;
            }
        }
        System.out.println(constructor);
    }

    //자연수 a을 받아서 각각의 자릿수와 a를 더합 값을 return한다
    public static int sum(int n) {
        int length = String.valueOf(n).length();
        int sum = 0;
        int num = n;
        for(int i = 1; i <= length; i++) {
            //마지막 자릿수를 더하기 위해서 %10을 구한다.
            sum += num % 10;
            //자연수의 가장 마지막 자릿수를 지운다.
            num /= 10;
        }
        return n + sum;
    }
}
