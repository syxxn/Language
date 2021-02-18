import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int testcaseNum = scanner.nextInt();
        String[] result = new String[testcaseNum];

        for(int i = 0; i < testcaseNum; i++) {
            result[i] = scanner.next(); // 테스트 케이스 개수만큼 문자열을 입력 받는다.
        }

        for(int i = 0; i < testcaseNum; i++) {
            int score = 0;
            int count = 0;
            String[] str = result[i].split("");
            for(int j = 0; j < str.length; j++) {
                if(str[j].equals("O")) { // 쪼갠 문자열이 O라면,
                    if(j!=0 && str[j-1].equals("O")) { //j가 0이 아니고 저번 문자도 O였다면 count++
                        count++;
                    }
                    else count = 1; //이번 문자만 O라면 1
                    score += count;
                }
            }
            System.out.println(score);
        }

        scanner.close();
    }

}
