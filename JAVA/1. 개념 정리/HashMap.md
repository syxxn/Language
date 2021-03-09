# HashMap



HashMap은 Map 인터페이스를 구현한 것이기 때문에 Map의 성질을 그대로 가지고 있다. **Key-Value** 형태를 띄고 있으며, 여기서 **키와 값은 모두 객체**이다. 값은 중복될 수 있지만 **키는 중복 저장될 수 없다**. 만약 기존에 저장된 키와 동일한 키로 값을 저장하면 기존 값은 없어지고 새로운 값으로 대치된다.



HashMap은 이름 그대로 Hashing을 사용하기 때문에 많은 양의 데이터를 검색하는 데 있어서 뛰어난 성능을 보인다. key 값의 hashCode를 index로 배열에 값을 저장하기 때문에 검색 속도 가 매우 빠르다.

> 해싱?
>
> 키 값에 직접 산술적인 연산을 적용하여 항목이 저장되어 있는 테이블의 주소를 계산하여 항목에 접근한다.



```java
HashMap<String,String> map1 = new HashMap<String,String>();//HashMap생성
HashMap<String,String> map2 = new HashMap<>();//new에서 타입 파라미터 생략가능
HashMap<String,String> map3 = new HashMap<>(map1);//map1의 모든 값을 가진 HashMap생성
HashMap<String,String> map4 = new HashMap<>(10);//초기 용량(capacity)지정
HashMap<String,String> map5 = new HashMap<>(10, 0.7f);//초기 capacity,load factor지정
HashMap<String,String> map6 = new HashMap<String,String>(){{//초기값 지정
    put("a","b");
}};

map.put("1104", "홍길동"); // put 함수 사용하여 데이터 추가
map.get("1104"); // 찾고 싶은 key 값을 넘기기
```

HashMap은 저장공간보다 값이 추가로 들어오면 List처럼 저장공간을 추가로 늘리는데, List처럼 저장공간을 한 칸씩 느리지 않고, 약 두배의 크기로 늘린다. 여기서 과부하가 많이 발생하기 때문에 초기 용량을 지정해 주는 것이 좋다.



____



### +

+ O(log n)은 O(n)보다 시간이 적게 걸린다.