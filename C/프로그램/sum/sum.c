#include "main.h"

extern int cnt;
int cnt2;

int sum(int a, int b) {
	cnt++;
	cnt2++;
	return a + b;
}