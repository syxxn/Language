//�ΰ����� �ð�

#include <stdio.h>

int main() {
    int h, m, s;//���� �ð�
    int t;//�� ���� �ð� 0<=t<=500000
    int a=0;
    scanf("%d %d %d", &h, &m, &s);
    scanf("%d", &t);
    
    m += t / 60; 
    s += t % 60;
    m += s / 60;
    s %= 60;
    h += m / 60;
    m %= 60;
    h %= 24;
    
    printf("%d %d %d", h, m, s);
    return 0;
}