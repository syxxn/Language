#include <stdio.h>

int main() {
	FILE* fp;
	if ((fp = fopen("a.txt", "w")) == NULL) {
		printf("file�� ���� ������ �߻��Ͽ����ϴ�.");
		return 1;
	}
	fprintf(fp, "test data : %d ", 55);
	fclose(fp);
	printf("������ ���������� ����Ǿ����ϴ�!!");

	return 0;
}