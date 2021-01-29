//주민등록번호 입력받아서 생년월일 출력하기
#include <stdio.h>

int main() {
    printf("주민번호를 입력하세요 : ");
    char num[15];
    scanf("%s", num);//문자로 입력받았으므로
    
    if (num[7] == '1') {//문자와 비교해줘야 함.
        printf("19%c%c/%c%c/%c%c M",num[0],num[1],num[2],num[3],num[4],num[5]);
    }
    else if(num[7]== '2') {
        printf("19%c%c/%c%c/%c%c F", num[0], num[1], num[2], num[3], num[4], num[5]);
    }
    else if (num[7] == '3') {
        printf("20%c%c/%c%c/%c%c M", num[0], num[1], num[2], num[3], num[4], num[5]);
    }
    else if (num[7] == '4') {
        printf("20%c%c//%c%c//%c%c F", num[0], num[1], num[2], num[3], num[4], num[5]);
    }
}