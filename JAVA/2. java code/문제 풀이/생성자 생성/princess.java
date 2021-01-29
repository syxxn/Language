import java.util.*;

public class princess {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);//Scanner에서 System.in을 필요로 하기 때문에
        Student student=new Student(sc.next(),sc.next(),sc.nextInt());//객체 선언->인스턴스화//
        Student st=new Student();//매개변수가 없는 생성자도 실행은 됨.
//        /*Student student=new Student();
//        student.setNumber(sc.next());//학번 설정하기(입력받아서)
//        student.setName(sc.next()); //이름 설정하기(입력받아서)
//        student.setScore(sc.nextInt());//점수 설정하기(입력받아서)*/
        System.out.println("학번 : " + student.getNumber());//학번 가져와서 출력하기
        System.out.println("이름 : " + student.getName());//. 앞에 오는 것과 변수 이름이 같아야 함.
        System.out.println("점수 : " + student.getScore());//점수 가져와서 출력하기
    }
}
