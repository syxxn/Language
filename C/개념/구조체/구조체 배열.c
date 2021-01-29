//구조체 배열 돌릴 땐 stu[i].score
//stu->score가 안되는 이유는 배열의 이름음 시작 주소만 갖고 있기 때문이다
//화살표 쓰고 싶으면 (stu+i)->score;

#include <stdio.h>

typedef struct {
	int id;
	int score;
}Student;

int main() {
	Student stu[4] = {
		{1401,70},
		{1402,90},
		{1403,65},
		{1404,95}
	};
	int total = 0;
	for (int i = 0; i < 4; i++) {
		total += (stu+i)->score;
	}
	for (int i = 0; i < 4; i++) {
		printf("번호 : %d 점수 : %d\n", stu[i].id, stu[i].score);
	}printf("Total : %d", total);
}