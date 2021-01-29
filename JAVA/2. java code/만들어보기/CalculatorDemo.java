//오버라이딩, 오버로딩 이용하여 합, 평균, 곱셈 구해주는 계산기 만들기
//값은 1부터 4까지 받을 수 있음
//This is no default constructor available in...
// : 생성자를 생성하라는 거임. 부모 클래스의 형식대로 생성자 생성해주기

class Calculator{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    public Calculator(int a){
        this.a=a;
    }
    public Calculator(int a,int b){
        this.a=a;
        this.b=b;
    }
    public Calculator(int a, int b,int c){
        this.a=a;
        this.b=b;
        this.c=c;
    }
    public Calculator(int a,int b,int c,int d){
        this.a=a;
        this.b=b;
        this.c=c;
        this.d=d;
    }
    public void sum(){
        System.out.println(a+b+c+d);
    }
    public void avg(){
        System.out.println((a+b+c+d)/4);
    }
    public void multi(){
        System.out.println(a*b*c*d);
    }
}

class Calculator2 extends Calculator{
    public Calculator2(int a) {
        super(a);
    }
    public Calculator2(int a,int b){
        super(a,b);
    }
    public Calculator2(int a,int b,int c){
        super(a,b,c);
    }
    public Calculator2(int a,int b,int c,int d){
        super(a,b,c,d);
    }
    public void sum(){
        System.out.println("이 수의 합은 "+(this.a+this.b+this.c+this.d)+"입니다");
    }
    public void avg(){
        System.out.println("이 수의 평균은 "+(this.a+this.b+this.c+this.d)/4+"입니다");
    }
    public void multi(){
        System.out.println("이 수의 곱은 "+(this.a*this.b*this.c*this.d)+"입니다");
    }
}



public class CalculatorDemo {
    public static void main(String[] args){
        Calculator2 c1=new Calculator2(1);
        c1.sum(); c1.avg(); c1.multi();
        System.out.println("_____________________________");
        Calculator2 c2=new Calculator2(1,2);
        c2.sum(); c2.avg(); c2.multi();
        System.out.println("_____________________________");
        Calculator2 c3=new Calculator2(1,2,3);
        c3.sum(); c3.avg(); c3.multi();
        System.out.println("_____________________________");
        Calculator2 c4=new Calculator2(1,2,3,4);
        c4.sum(); c4.avg(); c4.multi();
    }
}