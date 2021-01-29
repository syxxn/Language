//struct 구조체명 변수명 으로 호출
	//구조체 변수
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct profile {
	int name[20];
	int age;
	double height;
	char* intro;//문자열 포인터/ 이름만 갖고있고 크기는 할당되지 않음
}p;
int main() {
	p me;
	strcpy(me.name, "이승윤");
	me.age = 9;
	me.height =155.5 ;
	me.intro = (char*)malloc(80);//동적할당/ 형변환 시켜주는게 좋음
	gets(me.intro);

	printf("이름: %s\n", me.name);
	printf("나이: %d\n", me.age);
	printf("키: %f\n", me.height);
	printf("%s\n", me.intro);
	free(me.intro);//동적할당할 대 제일 중요한 것
}