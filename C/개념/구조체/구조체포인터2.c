//����ü �����Ϳ����� p1->kor�̷������� ���°� �Ϲ���
//���� ó�� �Ⱦ����� (*p1).kor ó�� �����
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
	printf("��������� %.2f", p1.avg);
}