#include<stdio.h>
#include<string.h>
int main() {
	char word[100];
	char ioi[100] = "IOI";//���ϴ°Ŷ� �迭 ũ�� ���� ���ֱ�

	scanf("%s", word);
	if (!strcmp(word,ioi)) {//strcmp : ���ڿ� ��, ������ 0�̴ϱ� �ݴ�� '!'
		printf("IOI is the International Olympiad in Informatics.");
	}
	else printf("I don't care.");

	return 0;
}