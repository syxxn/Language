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
			//strlen : ���ڿ��� ���� ���ϴ� �Լ�
			//���ڿ��� ���� �˸��� �� ���ڴ� �����ϰ� ���� �� �ִ� ������ ���� ��ȯ
			printf("%c", codename[i][j]);
		}printf("\n");
	}
}