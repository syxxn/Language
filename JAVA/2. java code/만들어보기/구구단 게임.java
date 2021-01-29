import java.util.*;

public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Random random=new Random();
        int score=0;

        System.out.println("구구단을 외자! 구구단을 외자!");
        for(int i=0;i<100;i++){
            int num1=random.nextInt(9);
            int num2=random.nextInt(9);
            System.out.printf("%d * %d =",num1,num2);
            int correct=num1*num2;
            int answer=sc.nextInt();
            if(answer!=correct) break;
            else score++;
        }
        System.out.printf("당신의 구구단 점수는? : %d",score);
    }

}
