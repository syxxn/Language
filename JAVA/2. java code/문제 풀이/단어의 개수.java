import java.util.*;

public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);

        String sentence=sc.nextLine().trim();
        //trim() : 해당 문자열의 앞 뒤 공백 제거
        sc.close();
        if(sentence.isEmpty()) System.out.println("0");
        //입력값이 아예 없는 경우 처리
        else{
            String[] s=sentence.split(" ");
            System.out.println(s.length);
        }
   }
}
