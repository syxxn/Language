/*
가운데 글자 가져오기
단어 S의 가운데 글자를 반환하는 함수, solution 만들기
단어의 길이가 짝수라면 가운데 두 글자 반환
 */
import java.util.*;
public class Hi {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String s = sc.next();//단어 s 입력받기

        System.out.println(solution(s));//solution함수 호출한 후 리턴값 출력하기 
    }

    public static String solution(String s) {
        //Static(정적)인 이유는? : static 메소드에서는 static이 선언되지 않은 변수에 접근이 불가능하기 때문

        String[] arr = s.split(""); //split함수 사용-> 알파벳 하나씩 끊어서 배열에 넣기

        int a = (s.length()) / 2; //단어의 가운데는 어디인가

        if (s.length()%2==0) { //단어의 길이가 짝수라면...
            String st=arr[a-1]+arr[a]; //만약 단어의 길이가 4면, 가운데는 2. 배열은 0부터 시작이니까 가운데는 2-1과 2
            return st;
        } 
        else { //단어의 길이가 홀수라면...
            return (arr[a]); //만약 단어의 길이가 3이면 3/2=1이 가운데
        }
    }
}