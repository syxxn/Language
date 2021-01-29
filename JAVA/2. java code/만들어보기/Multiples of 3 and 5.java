import java.util.*;
public class Main {

    public static int multiple3And5(int max){
        int sum=0;
        for(int i=3;i<max;i++){
            if((i%3==0)||(i % 5 == 0)){
                sum+=i;
            }
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int max=sc.nextInt();

        int sum=multiple3And5(max);
        System.out.printf("%d 미만의 자연수에서 3, 5의 배수의 총합은 : %d",max,sum);
    }

}
