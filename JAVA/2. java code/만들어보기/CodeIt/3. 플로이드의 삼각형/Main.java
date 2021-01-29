import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ShapePrinter printer = new ShapePrinter();
        int a=sc.nextInt();
        // 입력값이 0보다 클 때까지 돌기
        while(a>0){
            printer.printFloydsPyramid(a);
            a=sc.nextInt();
        }
    }
}