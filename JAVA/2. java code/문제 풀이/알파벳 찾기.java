import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String word = scanner.next();

        int[] num = new int[26]; // 초깃값 0으로 채워진 배열 생성

        for(int i = 0; i < 26; i++) num[i] = -1;

        char[] alphabet = new char[word.length()];
        for(int i = 0; i < alphabet.length; i++) {
            alphabet[i] = word.charAt(i); // charAt은 특정 인덱스(위치)에 위치하는 문자를 뽑아준다.
        }

        for(int i = 0; i < 26; i++) {
            for(int j = 0; j < alphabet.length; j++) {
                if(num[i] == -1 && alphabet[j]-'a' == i) // char형 - 'a' = 소문자 아스키 코드가 0~25로 나옴.
                    num[i] = j;
            }
        }

        for(int i : num) {
            System.out.print(i+" ");
        }
    }

}
