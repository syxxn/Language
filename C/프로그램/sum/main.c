#include<stdio.h>
#include "main.h"//���� ���丮�� ������ ""

static int cnt2; //static ������ �ʱⰪ == 0
int cnt;

int main() {
	printf("ù��° �հ� : %d\n", sum(1, 2));
	printf("�ι�° �հ� : %d\n", sum(3, 4));
	printf("����° �հ� : %d\n", sum(5, 6));

	printf("�� sum�Լ� ���� �� : %d\n", cnt);
	printf("cnt2 : %d\n", cnt2);
	return 0;
}