### SUPER

+ 상속받은 자식 클래스에서 부모 클래스의 함수를 호출하고 싶을 때 super를 이용한다.
+ **Method Overriding** : 조상 클래스에서 선언한 멤버함수를 자손에서 다시 선언할 수 있다.
+ 상속 시 조상에서의 생성자도 실행된다.

```java
class A {
	void print() {
		System.out.print("A print\n");
	}
}

class B extends A {
	void print() {
		System.out.print("B print\n");
		super.print();
	}
}

public class Test {
	public static void main(String[] args) {
		B t = new B();
		t.print();
	}
}
```

