//�ֹε�Ϲ�ȣ �Է¹޾Ƽ� ������� ����ϱ�
#include <stdio.h>

int main() {
    printf("�ֹι�ȣ�� �Է��ϼ��� : ");
    char num[15];
    scanf("%s", num);//���ڷ� �Է¹޾����Ƿ�
    
    if (num[7] == '1') {//���ڿ� ������� ��.
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