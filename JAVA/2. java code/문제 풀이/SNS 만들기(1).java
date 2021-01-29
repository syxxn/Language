//SNS 만들기(1)
//Q. SNS를 이용하는 남학생과 여학생은 각각 모두 몇 명인가?

import java.util.*;

public class Main {

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int f=0, m=0;

        for(int i=0;i<n;i++){
            String student=sc.next();
            String[] stu_info=student.split(",");
            if(stu_info[1].equals("F"))f++;
            else if(stu_info[1].equals("M"))m++;

        }

        System.out.println(m+"\n"+f);
    }

}
