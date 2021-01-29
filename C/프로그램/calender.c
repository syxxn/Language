#include <stdio.h>
//윤년계산
#define leapyear(year)((year)%4==0&&((year)%100!=0||(year)%400==0))

int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

int week(int year, int month, int day) {
	//요일 계산하는 함수
	//0-일요일, 1-월요일...6-토요일(첼러공식)
	if (month == 1 || month == 2) {
		year--;
		month += 12;
	}
	return (year + (year / 4) - (year / 100) + (year / 400) + (13 * month + 8) / 5 + day ) % 7;
}
char print_cal(int year,int month,int day,int s) {
	int index=s;//요일 세주기
	printf("\n%d년 %d월 달력\n", year, month);
	printf("--------------------------------------------- \n");
	printf("일\t월\t화\t수\t목\t금\t토\n");
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
	printf("연도와 월을 입력해주세요 : ");
	scanf("%d %d", &year, &month);
	while (year != 0) {
		s=week(year, month, day);
		if (month == 2 && leapyear(year))days[2] = 29;
		else if (month == 2)days[2] = 28;
		print_cal(year, month, days[month], s);
		printf("\n연도와 월을 입력해주세요 : ");
		scanf("%d %d", &year, &month);
	}
}