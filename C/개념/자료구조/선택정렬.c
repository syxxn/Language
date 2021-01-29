#include<stdio.h>

//선택정렬
int main() {
	int num[5] = { 6,2,5,4,8 };
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (num[i] > num[j]) {
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", num[i]);
	}
}