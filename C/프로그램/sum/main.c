#include<stdio.h>
#include "main.h"//같은 디렉토리에 있으면 ""

static int cnt2; //static 변수는 초기값 == 0
int cnt;

int main() {
	printf("첫번째 합계 : %d\n", sum(1, 2));
	printf("두번째 합계 : %d\n", sum(3, 4));
	printf("세번째 합계 : %d\n", sum(5, 6));

	printf("총 sum함수 실행 수 : %d\n", cnt);
	printf("cnt2 : %d\n", cnt2);
	return 0;
}