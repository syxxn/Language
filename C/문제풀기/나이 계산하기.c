#include<stdio.h>
//�� ���̴� ���� ����
//���� ���̴� ������ �������� �¾�ڸ��� 1�� 
//�� ���̴� ������ �������� �¾�ڸ��� 0��

int main() {
	int bir[3];//���� �� ��
	int day[3];//���� ��¥
	int m = 0, s, y;//������� �� ����,���� ����,�� ����
	scanf("%d %d %d", &bir[0], &bir[1], &bir[2]);
	scanf("%d %d %d", &day[0], &day[1], &day[2]);
	if (bir[0] == day[0])m = 0;
	else if (bir[0] < day[0]) {
		for (int i = bir[0]; i < day[0]; i++) {
			if (bir[1] <= day[1] && bir[2] <= day[2])m++;
			else if (bir[1] < day[1])m++;
			else if (i < day[0] - 1) m++;
		}
	}
	s = day[0] - bir[0] + 1;
	y = day[0] - bir[0];
	printf("%d\n%d\n%d", m, s, y);
}