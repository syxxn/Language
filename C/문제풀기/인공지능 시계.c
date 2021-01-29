//인공지능 시계

#include <stdio.h>

int main() {
    int h, m, s;//현재 시각
    int t;//초 단위 시간 0<=t<=500000
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