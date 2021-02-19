import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] n = new int[10];
        List<Integer> check = new ArrayList<>();
        int count = 0;

        for(int i = 0; i < 10; i++) {
            //hasNext는 boolean 자료형 타입으로 반환된다. 다음에 가져올 값이 있으면 true, 없으면 false
            //next는 아무 타입으로도 반환할 수 있다.
            n[i] = scanner.nextInt();
        }

        for(Integer num : n) {
            if(!check.containsAll(Collections.singleton(num % 42))) {
                // containsAll : 파라미터로 넘어간 리스트가 해당 리스트에 존재하는지 여부를 반환한다. 순서와는 무관하다.
                    check.add(num % 42);
                    count++;
            }
        }

        System.out.println(count);

        scanner.close(); // 자원이 새어나가는 것을 방지 할 수 있다. close의 단점은 닫은 System.in 스트림을 다시 열 수 없다는 것이다.
    }

}
