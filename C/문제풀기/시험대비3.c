/*
 ���� �ҹ��ڷ� ������ �ܾ� s1,s2,s3�� ���� ��,
 s1�� ������ ���ڰ� s2�� ù ���ڿ� ����,
 s2�� ������ ���ڰ� s3�� ù ���ڿ� ����,
 s3�� ������ ���ڰ� s1�� ù ���ڿ� ������ ��ȯ ���ڿ��̶�� �Ѵ�.
 ���� ��� turtle error robot�� ��� ��ȯ ���ڿ��̴�.
 �� �ܾ �־����� �� ��ȯ ���ڿ��̸� good�� ���, 
 �ƴϸ� bad�� ����Ͻÿ�.
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