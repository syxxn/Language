//struct ����ü�� ������ ���� ȣ��
	//����ü ����
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct profile {
	int name[20];
	int age;
	double height;
	char* intro;//���ڿ� ������/ �̸��� �����ְ� ũ��� �Ҵ���� ����
}p;
int main() {
	p me;
	strcpy(me.name, "�̽���");
	me.age = 9;
	me.height =155.5 ;
	me.intro = (char*)malloc(80);//�����Ҵ�/ ����ȯ �����ִ°� ����
	gets(me.intro);

	printf("�̸�: %s\n", me.name);
	printf("����: %d\n", me.age);
	printf("Ű: %f\n", me.height);
	printf("%s\n", me.intro);
	free(me.intro);//�����Ҵ��� �� ���� �߿��� ��
}