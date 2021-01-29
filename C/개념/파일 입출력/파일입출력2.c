#include <stdio.h>

int main() {
	FILE* fp;//파일을 가리키는 구조체 포인터
	char ch;
	//fgets(입력할 배열, 배열의 크기, 파일 포인터)
	if ((fp = fopen("a.txt", "w")) == NULL) {
		printf("file을 열 때 오류가 발생하였습니다.");
		return 1;//비정상종료
	}
	while (1) {
		ch=fgetc(stdin);//ㅋㅣ보드로 직접 입력받겠다
		if (ch == EOF/*파일의 끝*/) { //파일의 끝이면 종료
			break;
		}
		fput(ch, fp);//파일에 ch 넣기
		
	}
	return 0;// 정상종료
}