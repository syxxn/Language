/*
 영어 소문자로 구성된 단어 s1,s2,s3가 있을 때,
 s1의 마지막 문자가 s2의 첫 글자와 같고,
 s2의 마지막 글자가 s3의 첫 글자와 같고,
 s3의 마지막 글자가 s1의 첫 글자와 같으면 순환 문자열이라고 한다.
 예를 들어 turtle error robot인 경우 순환 문자열이다.
 세 단어가 주어졌을 때 순환 문자열이면 good을 출력, 
 아니면 bad를 출력하시오.
*/

#include <stdio.h>

int main() {
	char s1[21], s2[21], s3[21];
	scanf("%s %s %s", s1, s2, s3);
	int count = 0, a, b,c;
	for (int i = 0; s1[i] != '\0'; i++) {
		count = i;
	}
	a = (s1[count] == s2[0] ? 1 : 0);
	for (int i = 0; s2[i] != '\0'; i++) {
		count = i;
	}
	b = (s2[count] == s3[0] ? 1 : 0);
	for (int i = 0; s3[i] != '\0'; i++) {
		count = i;
	}
	c= (s3[count] == s1[0] ? 1 : 0);
	if (a *b*c == 1)printf("good");
	else printf("bad");
}