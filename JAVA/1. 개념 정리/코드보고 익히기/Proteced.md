### Proteced

1. 상속  X, 외부 X : private
2. 상속 O, 외부 X : protected
3. 상속 O, 외부 O : public

+ 부모 타입의 변수로 자식의 인스턴스를 가리킬 수 있다.
  + 조상에서 선언한 멤버함수, 멤버 변수만 호출이 가능하다.
  + 만일 오버라이딩(내부 변화) 된 함수를 호출한다면 이 때는 오버라이딩 된 함수가 호출된다.
  + 멤버함수는 오버라이딩이 되지만, 멤버변수는 오버라이딩의 개념이 존재하지 않기 때문에 호출시 조상의 멤버변수가 호출된다.

```java
class A {
	protected int i = 100;
	void print() {
		System.out.print("A print\n");
	}
}

class B extends A {
	int i = 200;
	void print2() {
		System.out.print("B print");
	}
	void print() {
		System.out.print("B print");
	}
}

public class Test27 {
	public static void main(String[] args) {
		A t = new B();//조상타입의 변수로 자식의 인스턴스를 가리킬 수 있다.
		System.out.println(t.i);
		t.print();
	}
}
```

