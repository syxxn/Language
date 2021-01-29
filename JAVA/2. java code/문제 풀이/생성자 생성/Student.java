import java.util.*;
public class Student {
    String number;//Student에는 접근 해야하지만 값에는 접근 못하도록-> 캡슐화
    String name;
    private int score; //외부에서 접근 못하도록,

    Student(String number, String name,int score){//Student라는 생성자를 만들어줌./ 클래스는 기본적으로 생성자 1개를 가져야 함.->기본 생성자(매개변수 x)
        //아무 생성자도 없다면 자바에서 기본 생성자를 만들어줌. 생성자를 하나라도 만들면, 기본생성자를 만들지 않는다.
        this.number=number;
        this.name=name;
        this.score=score;
    }
    Student(){
    }

    //생성자는 반환하지 않는다
    //생성자는 이름==클래스 이름

    public String getNumber() {//가져오다/ public 어디서든 사용할 수 있는 String 반환값 메소드/ 게터
        return number;
    }
    public void setNumber(String number) {//설정하다/public 어디서든 사용할 수 있는, String number를 받아와서 설정/ 세터//
        this.number = number;//함수 내에서 this를 사용하면 자신의 객체를 찾는 것. 필드 변수를 가리킴
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getScore() {
        return score;
    }

    public void setScore(int score) {
        this.score = score;
    }
}
