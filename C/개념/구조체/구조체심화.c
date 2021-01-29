//struct 구조체명 변수명 으로 호출//구조체는 ->// (list+i)->name ==list[i].name
	//구조체 변수
#include <stdio.h>
#include<stdlib.h>

typedef struct {//대문자
	int sno;
	char name[20];
	int score;
	int amt;
}Student; //별칭(typedef)쓴다는건 구조체명을 생략한다는 것.

void input_student(int n, Student* dsm_student) {//학번 이름 점수 입력 받기
	int i = 0;
	while (i < n) {
		scanf("%d %s %d", &dsm_student[i].sno, &dsm_student[i].name, &dsm_student[i].score); i++;//배열도 [i] 쓸거면 &쓰기
	}
}
void input_amt(int n, Student* dsm_student) {//점수 비교해서 가장 점수 높은 사람만 장학금 주기
	int max = -1, count = 0;//max 값은 작게 만들기, count는 몇번째 배열에 가장 높은 점수가 있는지 세주기
	for (int i = 0; i < n; i++) {
		if (max < dsm_student[i].score) {
			max = dsm_student[i].score; count = i;
		}
		dsm_student[i].amt = 0;
	}
	dsm_student[count].amt = 9999999;
}
void print_student(int n, Student* dsm_student) {
	for (int i = 0; i < n; i++) {
		printf("%d %s %d %d\n", dsm_student[i].sno, dsm_student[i].name, dsm_student[i].score, dsm_student[i].amt);
	}
}

int main() {
	Student* dsm_student;
	int n;//학생수
	scanf("%d", &n);
	dsm_student = (Student*)malloc(sizeof(Student) * n);//(형변환)malloc(크기지정)//형변환은 변수의 자료형으로
	input_student(n, &dsm_student);
	input_amt(n, &dsm_student);
	print_student(n, &dsm_student);
	free(dsm_student);//malloc하면 꼭 프리 해주세요
}