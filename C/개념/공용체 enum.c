#include <stdio.h>

int main() {
	FILE* fp;
	if ((fp = fopen("a.txt", "w")) == NULL) {
		printf("file을 열때 오류가 발생하였습니다.");
		return 1;
	}
	fprintf(fp, "test data : %d ", 55);
	fclose(fp);
	printf("파일이 정상적으로 저장되었습니다!!");

	return 0;
}