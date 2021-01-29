#include<stdio.h>

//버블정렬
int main() {
	int num[5] = { 6,2,5,4,8 };
	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			if (num[j] > num[j + 1]) {
				int tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", num[i]);
	}
}