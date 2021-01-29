#include <stdio.h>
#include<string.h>

int main() {
	char codename[100][100];
	int n=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &codename[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = strlen(codename[i])-1; j>=0; j--) {
			//strlen : 문자열의 길이 구하는 함수
			//문자열의 끝을 알리는 널 문자는 제외하고 실제 들어가 있는 글자의 개수 반환
			printf("%c", codename[i][j]);
		}printf("\n");
	}
}