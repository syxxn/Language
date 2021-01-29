#include<stdio.h>
#include<string.h>
int main() {
	char word[100];
	char ioi[100] = "IOI";//비교하는거랑 배열 크기 같게 해주기

	scanf("%s", word);
	if (!strcmp(word,ioi)) {//strcmp : 문자열 비교, 같으면 0이니까 반대로 '!'
		printf("IOI is the International Olympiad in Informatics.");
	}
	else printf("I don't care.");

	return 0;
}