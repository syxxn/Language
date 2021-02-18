import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Integer[] num = new Integer[9];
        int count = 0;

        for(int i = 0; i < 9; i++) {
            num[i] = scanner.nextInt();
        }

        //Integer[] sort = num; 은 num의 주소를 함께 가리키고 있는 것으로서, 얕은 복사의 방법이다.
        //깊은 복사를 해야 복사 배열을 수정해도 원본이 변경되지 않는다.
        Integer[] sort = num.clone();

        Arrays.sort(sort, Collections.reverseOrder()); // Arrays.sort는 래퍼 클래스만

        for (int n : num) {
            count++;
            if(n == sort[0]) {
                break;
            }
        }

        System.out.println(sort[0]);
        System.out.println(count);

    }

}
