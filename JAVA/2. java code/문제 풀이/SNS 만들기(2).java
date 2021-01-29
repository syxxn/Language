//SNS 만들기(2)
//Q. 학생들의 평균 나이는 몇 살인가?

import java.util.*;

public class Main {

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        double age_avg=0;

        for(int i=0;i<n;i++){
            String student=sc.next();
            String[] stu_info=student.split(",");
            age_avg+=Double.parseDouble(stu_info[2]);

        }

        System.out.printf("%.2f",age_avg/n);
    }

}
