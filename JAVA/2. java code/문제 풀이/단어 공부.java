import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String word = scanner.next();
        int[] count = new int[26]; // Integer는 산수 연산이 불가능 하다.
        int position = 0;

        for(int i = 0; i < 26; i++) {
            count[i] = 0;
        }

        word = word.toLowerCase(Locale.ROOT);
        for(int i = 0; i < word.length(); i++) {
            count[word.charAt(i)-'a']+=1;
        }

        for(int i = 0; i < 26; i++) {
            if(count[position] < count[i]) position = i;
        }

        for(int i = 0; i < 26; i++) {
            if(count[position] == count[i] && position != i) {
                System.out.println("?");
                return;
            }
        }

        System.out.println((char)('A'+position));
    }

}