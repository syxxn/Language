import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        boolean main = true;
        boolean course = true;

        while(main){
            System.out.println("(I)ntro (C)ourses (E)xit");
            switch(scanner.next()){
                case "E": case "e":
                    System.out.println("안녕히 가세요.");
                    main = false;
                    break;
                case "I": case "i":
                    System.out.println("안녕하세요! 우리는 코드잇입니다.");
                    System.out.println("함께 공부합시다!");
                    continue;
                case "C": case "c":
                    while(course){
                        System.out.println("코드잇 수업을 소개합니다.");
                        System.out.println("(P)ython (J)ava (i)OS (B)ack");
                        switch(scanner.next()){
                            case "P": case "p":
                                System.out.println("Python 언어를 통해 컴퓨터 사이언스의 기초를 배웁니다.");
                                System.out.println("강사: 강영훈");
                                System.out.println("추천 선수과목: 없음");
                                continue;
                            case "J": case"j":
                                System.out.println("Java의 기본 문법과 객체지향적 프로그래밍을 배웁니다.");
                                System.out.println("강사: 김신의");
                                System.out.println("추천 선수과목: Python");
                                continue;

                            case "I": case "i":
                                System.out.println("Swift 언어를 통해 iOS 개발을 시작할 수 있습니다.");
                                System.out.println("강사: 성태호");
                                System.out.println("추천 선수과목: Python, Java");
                            case "B": case "b":
                                course = false;
                                break;
                        }
                    }
                    continue;
            }
        }


    }
}
