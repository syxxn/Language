#include<stdio.h>
//만 나이는 생일 기준
//세는 나이는 생년을 기준으로 태어나자마자 1세 
//연 나이는 생년을 기준으로 태어나자마자 0세

int main() {
	int bir[3];//생년 월 일
	int day[3];//기준 날짜
	int m = 0, s, y;//순서대로 만 나이,세는 나이,연 나이
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