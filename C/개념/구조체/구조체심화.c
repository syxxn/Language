//struct ����ü�� ������ ���� ȣ��//����ü�� ->// (list+i)->name ==list[i].name
	//����ü ����
#include <stdio.h>
#include<stdlib.h>

typedef struct {//�빮��
	int sno;
	char name[20];
	int score;
	int amt;
}Student; //��Ī(typedef)���ٴ°� ����ü���� �����Ѵٴ� ��.

void input_student(int n, Student* dsm_student) {//�й� �̸� ���� �Է� �ޱ�
	int i = 0;
	while (i < n) {
		scanf("%d %s %d", &dsm_student[i].sno, &dsm_student[i].name, &dsm_student[i].score); i++;//�迭�� [i] ���Ÿ� &����
	}
}
void input_amt(int n, Student* dsm_student) {//���� ���ؼ� ���� ���� ���� ����� ���б� �ֱ�
	int max = -1, count = 0;//max ���� �۰� �����, count�� ���° �迭�� ���� ���� ������ �ִ��� ���ֱ�
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
	int n;//�л���
	scanf("%d", &n);
	dsm_student = (Student*)malloc(sizeof(Student) * n);//(����ȯ)malloc(ũ������)//����ȯ�� ������ �ڷ�������
	input_student(n, &dsm_student);
	input_amt(n, &dsm_student);
	print_student(n, &dsm_student);
	free(dsm_student);//malloc�ϸ� �� ���� ���ּ���
}