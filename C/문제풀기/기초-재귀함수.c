#include<stdio.h>
// ��ͷ� �� �ڸ� ���� �� �����ϱ�

int sum(long long int n) {
	int tmp = n % 10;
	if (n <= 1)return tmp;
	return tmp + sum((long long int) (n / 10));
}

int main() {
	long long int n;
	scanf("%lld",&n);
	printf("%d",sum(n));
}

/*
1. n=321
2. sum�Լ��� �θ�
3. tmp = n % 10 ==1
4. n��1���� ���ų� ������ tmp�� ��ȯ��(�ش� �ȵǹǷ� �Ѿ)
5. n/10�� �Ű������� ������ sum ȣ��
6. tmp = n % 10 ==2
7. 4�� ����
8. 5�� ����
9. tmp = n % 10 ==3
10. 4�� ����
11. 5�� ���� (n / 10 ==0)
12 tmp == 0
13. n�� 1���� �����Ƿ� return tmp(==0)
14. 0 + 3
15. 3 + 2
16. 5 + 1
*/
