//����ü �迭 ���� �� stu[i].score
//stu->score�� �ȵǴ� ������ �迭�� �̸��� ���� �ּҸ� ���� �ֱ� �����̴�
//ȭ��ǥ ���� ������ (stu+i)->score;

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
		printf("��ȣ : %d ���� : %d\n", stu[i].id, stu[i].score);
	}printf("Total : %d", total);
}