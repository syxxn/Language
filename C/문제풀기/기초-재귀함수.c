#include<stdio.h>
// 재귀로 각 자리 수의 합 리턴하기

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
2. sum함수를 부름
3. tmp = n % 10 ==1
4. n이1보다 같거나 작으면 tmp를 반환함(해당 안되므로 넘어감)
5. n/10을 매개변수로 가지는 sum 호출
6. tmp = n % 10 ==2
7. 4와 동일
8. 5와 동일
9. tmp = n % 10 ==3
10. 4와 동일
11. 5와 동일 (n / 10 ==0)
12 tmp == 0
13. n이 1보다 작으므로 return tmp(==0)
14. 0 + 3
15. 3 + 2
16. 5 + 1
*/
