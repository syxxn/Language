#include <stdio.h>

#include <stdio.h>

typedef struct {
	int id;
	int score;
	char grade;
}Student;

void calc(Student stu[4]) { 
	for (int i = 0; i < 4; i++) {
		switch ((stu[i].score) / 10) {
		case 10: case 9:
			stu[i].grade = 'A'; break;
		case 8: stu[i].grade = 'B'; break;
		case 7: stu[i].grade = 'C'; break;
		default: stu[i].grade = 'D';
		}
	}

}
int total(Student* stu) {
	int total = 0;
	for (int i = 0; i < 4; i++) {
		total += (stu + i)->score;
	}
	return total;
}

int main() {
	Student stu[4] = {
		{1401,70},
		{1402,90},
		{1403,65},
		{1404,95}
	};
	calc(stu);
	for (int i = 0; i < 4; i++) {
		printf("��ȣ : %d ���� : %d ��� : %c\n", stu[i].id, stu[i].score, stu[i].grade);
	}/
	printf("Total : %d", total(stu));
}