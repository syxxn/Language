//struct 구조체명 변수명 으로 호출
	//구조체 변수
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Books {//대문자
	char name[30];
	char auth[20];
	int price;
	int borrowed;
}b;
int main() {
	b b[3];
	for (int i = 0; i < 3; i++) {
		scanf("%s", b[i].name);
		scanf("%s", b[i].auth);
		scanf("%d", &b[i].price);
		scanf("%d", &b[i].borrowed);//1은 대출 /0
	}
	for (int i = 0; i < 3; i++) {
		printf("%s\n%s\n%d", b[i].name, b[i].auth, b[i].price);
		if (b[i].borrowed == 1)printf("빌려짐\n");
		else printf("안빌려짐\n");

	}

}