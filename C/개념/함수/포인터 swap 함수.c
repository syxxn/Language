#include <stdio.h>
void myswap(int* a, int* b) {
    if (*a > * b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
}
//*a는 a가 가리키는 주소가 가진 값을 말함
//&a는 a의 주소를 말함
//매개변수로 포인터를 받으면, 
//return으로 값을 돌려줄 필요가 없음

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}