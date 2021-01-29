# Chapter 2 . 변수와 자료형

> 변수는 메모리 공간에 할당됨

### 기본 자료형 - 데이터를 표현하는 방법

> 변수의 자료형 결정은 '해당 변수에 값을 저장 및 참조하는 방식의 결정' 의미

+ 참과 거짓 (1) boolean 

  > ```java
  > boolean a = true;
  > boolean b = false;
  > boolean c = 0; // 오류남.
  > ```

+ 문자 (2) char 

  > 문자의 저장은 **유니코드** 값의 저장으로 이어짐
  >
  > JVM이 유니코드 정보를 가지고 일반적인 변화들을 대신 해줌

  + 문자와 문자열

  `System.out.println('알랑방구')`-> 오류남. 문자열은 큰 따옴표("")로 묶어주기

  `System.out.println("알랑방구")`

  `System.out.println("알")`-> 문자 하나도 문자열이 될 수있기 때문에 오류 안남

+ 정수

  > 기본적으로 사칙 연산은 int 연산을 한다 (컴퓨터의 성능을 높이기 위해)

  + (1) byte
  + (2) short
  + (4) int
  + (8) long

+ 실수

  > float와 double 사이에서의 자료형 선택 기준은 정밀도!
  >
  > 오차 : float > double

  + (4) float
  + (8) double