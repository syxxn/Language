#include <stdio.h>


int main() {
	FILE* fp;
	if ((fp = fopen("a.txt", "w")) == NULL) { 
		printf("file을 열때 오류가 발생하였습니다.");
		return 1;
	}
	fprintf(fp, "test data : %d ", 55); //파일에 입력함
	fclose(fp); //파일 닫기
	printf("파일이 정상적으로 저장되었습니다!!");

	return 0;
}

//개방모드
		//r : 읽기 위해 개방/NULL 반환
		//r+ : 읽기/쓰기 
		//w : 파일의 내용을 지우고 쓰기 위해 개방/새로운 파일 생성
		//a : 파일의 끝에 추가하기 위해 개방/새 파일 생성
		//b : 바이너리 모드(파일의 내용을 그대로 읽고, 값을 그대로 씀)
		//t :텍스트 모드(파일을 읽거나 쓸 때 개행문자 \n와 \r\n을 서로 변환함.