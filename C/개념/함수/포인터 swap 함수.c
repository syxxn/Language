#include <stdio.h>
void myswap(int* a, int* b) {
    if (*a > * b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
}
//*a�� a�� ����Ű�� �ּҰ� ���� ���� ����
//&a�� a�� �ּҸ� ����
//�Ű������� �����͸� ������, 
//return���� ���� ������ �ʿ䰡 ����

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}