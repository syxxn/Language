### this

+ 클래스의 필드 변수를 사용하기 위해서는 this를 사용한다!

```java
class User {
	int uuid;
	String name;
	User() {
		this.uuid = 0000;
		this.name = "Guest";
	}
	User(int uuid, String name) {
		this.uuid = uuid;
		this.name = name;
	}
	int getUniqueId() {
		return this.uuid;
	}
	String getName() {
		return this.name;
	}
}

public class Test {
	public static void main(String[] args) {
		User player = new User(1104, "옴뇸뇸");
		System.out.println("UUID: "+player.getUniqueId());
		System.out.println("NAME: "+player.getName());
	}
}
```

