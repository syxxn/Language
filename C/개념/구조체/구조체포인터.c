//struct ����ü�� ������ ���� ȣ��//����ü�� ->// (list+i)->name ==list[i].name
	//����ü ����
#include <stdio.h>

typedef struct Bmi {//�빮��
	char name[20];
	double height;
	double weight;
	double bmi;
}Bmi;

void calcBmi(Bmi *bmi) {
	bmi->bmi = bmi->weight / (bmi->height * bmi->height);
}

int main() {
	Bmi bmi;
	scanf("%s", bmi.name);
	scanf("%lf", &bmi.height);
	scanf("%lf", &bmi.weight);
	bmi.height /= 100;
	calcBmi(&bmi);
	if (bmi.bmi < 25) printf("%s���� ����ü���Դϴ�.", bmi.name);
	else if (bmi.bmi >= 25 && bmi.bmi < 30)printf("%s���� ��ü���Դϴ�.", bmi.name);
	else printf("%s���� ���Դϴ�.", bmi.name);
}