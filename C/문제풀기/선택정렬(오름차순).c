#include<stdio.h>
/*
선택정렬은 지금 잡고 있는 값과 
정렬되지 않은 값들과 비교하여 
앞에서부터 차곡차곡 쌓아가는 것.
(기준 값을 가지고 나머지값과 계속 비교)
*/
//오름차순
int main() {
	int n;
	int data[10000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = i; j < n; j++) {//i앞에는 이미 정렬된것이므로 i부터 돌리기
			if (data[i] > data[j]) {//만약 앞에 있는게 더 크면 바꾸기
				int tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", data[i]);
	}
}