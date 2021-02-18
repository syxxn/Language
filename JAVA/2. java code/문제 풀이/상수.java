import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String a = scanner.next();
        String b = scanner.next();

        String[] astr = a.split("");
        String[] bstr = b.split("");
        a = "";
        b = "";

        for(int i = 2; i >= 0; i--) {
            a += astr[i];
            b += bstr[i];
        }

        String answer = Integer.parseInt(a) > Integer.parseInt(b) ? a : b;
        System.out.println(answer);
    }

}
