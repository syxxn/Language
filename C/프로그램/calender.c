#include <stdio.h>
//������
#define leapyear(year)((year)%4==0&&((year)%100!=0||(year)%400==0))

int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

int week(int year, int month, int day) {
	//���� ����ϴ� �Լ�
	//0-�Ͽ���, 1-������...6-�����(ÿ������)
	if (month == 1 || month == 2) {
		year--;
		month += 12;
	}
	return (year + (year / 4) - (year / 100) + (year / 400) + (13 * month + 8) / 5 + day ) % 7;
}
char print_cal(int year,int month,int day,int s) {
	int index=s;//���� ���ֱ�
	printf("\n%d�� %d�� �޷�\n", year, month);
	printf("--------------------------------------------- \n");
	printf("��\t��\tȭ\t��\t��\t��\t��\n");
	printf("--------------------------------------------- \n");
	for (int i = 0; i < index; i++) {
		printf("\t");
	}
	for (int i = 1; i<=day; i++) {
		
		if (index==0)printf("%d\t", i);
		else printf("%d\t", i);
		index++;
		if (index == 7) { printf("\n"); index = 0; }
	}
}

int main() {
	int year, month,day=1;
	int s;
	printf("������ ���� �Է����ּ��� : ");
	scanf("%d %d", &year, &month);
	while (year != 0) {
		s=week(year, month, day);
		if (month == 2 && leapyear(year))days[2] = 29;
		else if (month == 2)days[2] = 28;
		print_cal(year, month, days[month], s);
		printf("\n������ ���� �Է����ּ��� : ");
		scanf("%d %d", &year, &month);
	}
}