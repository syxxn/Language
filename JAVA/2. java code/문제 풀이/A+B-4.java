import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while(scanner.hasNextInt()) {
            //hasNext는 boolean 자료형 타입으로 반환된다. 다음에 가져올 값이 있으면 true, 없으면 false
            //next)는 아무 타입으로도 반환할 수 있다.
            int a = scanner.nextInt();
            int b = scanner.nextInt();

            System.out.println(a+b);
        }

        scanner.close(); // 자원이 새어나가는 것을 방지 할 수 있다. close의 단점은 닫은 System.in 스트림을 다시 열 수 없다는 것이다.
    }

}
