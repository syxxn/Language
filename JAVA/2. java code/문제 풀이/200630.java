import java.util.ArrayList;
import java.util.*; //자바는 필요없는 걸 주석처리 한다. 대박 신기해
public class java기초 {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int[] hi={1,2,3,4};
        for(int i:hi){
            System.out.println(i);
        }

        ArrayList<Integer> list=new ArrayList<>(); //ArrayList는 class, 특정 문법만 사용 가능
        for(int i=0;i<5;i++){
            list.add(sc.nextInt());//입력받은 값을 list에 넣어준다는 것
        }
        for(int i:list){
            System.out.println(i);//list의 i번째 배열을 출력한다는 것.
        }
    }
}
