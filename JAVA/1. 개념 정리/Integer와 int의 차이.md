# Integer와 int의 차이



int형은 primitive(원시) 자료형으로서, 산술연산이 가능하고, null로 초기화할 수 없다.

Integer는 wrapper 클래스로서, null 값 처리를 할 수 있고, SQL과 연동할 경우 처리가 용이하다. Unboxing을 하면 산술 연산이 가능하다.

> 그래서 Entity 클래스에서는 보통 Wrapper 클래스를 사용하나 봄.



Boxing은 primitive형 자료가 래퍼 클래스로 변환하는 것이고, Unboxing은 래퍼 클래스가 primitive형으로 변환하는 건데, `Integer ii = new Integer( i );` 이런 느낌으로 하는 것이다.

자바에서는 대부분의 경우에서 자동으로 boxing / unboxing을 해 준다.