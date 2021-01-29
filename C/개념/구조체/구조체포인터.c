//struct 구조체명 변수명 으로 호출//구조체는 ->// (list+i)->name ==list[i].name
	//구조체 변수
#include <stdio.h>

typedef struct Bmi {//대문자
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
	if (bmi.bmi < 25) printf("%s님은 정상체중입니다.", bmi.name);
	else if (bmi.bmi >= 25 && bmi.bmi < 30)printf("%s님은 과체중입니다.", bmi.name);
	else printf("%s님은 비만입니다.", bmi.name);
}