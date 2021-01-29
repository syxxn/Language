//구조체 포인터에서는 p1->kor이런식으로 쓰는게 일반적
//위에 처럼 안쓰려면 (*p1).kor 처럼 써야함
#include <stdio.h>

typedef struct{
	int kor;
	int math;
	int eng;
	double avg;
}person;

void calc_avg(person*p1) {
	p1->avg = ((*p1).kor + p1->math + p1->eng) / 3.0;
}

int main() {
	person p1;
	p1.kor = 90;
	p1.eng = 70;
	p1.math = 80;
	calc_avg(&p1);
	printf("평균점수는 %.2f", p1.avg);
}