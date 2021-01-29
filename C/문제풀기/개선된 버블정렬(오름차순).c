#include<stdio.h>
/*
버블정렬은 인접한 자료와 비교하여 순서가 바뀌었을 때
서로 교환하는 정렬 방법이다.

개선된 버블정렬은 버블 정렬의 각 단계에서 교환이
더 이상 발생하지 않으면 정렬을 끝내는 것이다.
*/
//오름차순
int main() {
	int n,count=0;//몇 단계를 거치는지 세는 count
	int data[1000];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}
	for (int i = n-1; i >=0; i--) {
		int flag = 1;//교환의 여부를 알려줌
		for (int j = 0; j < i; j++) {//버블정렬은 뒤에서부터 채움
			
			if (data[j] > data[j + 1]) {//오름차순이므로 앞에 자료가 더 크면 뒤의 자료와 바꾸기
				int tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
				flag = 0;//교환이 일어남
			}
		}
		if (flag == 1) break;//교환이 일어나지 않음
		else count++;//교환이 일어났으므로 count++
	}
	printf("%d", count);
}