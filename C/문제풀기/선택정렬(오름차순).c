#include<stdio.h>
/*
���������� ���� ��� �ִ� ���� 
���ĵ��� ���� ����� ���Ͽ� 
�տ������� �������� �׾ư��� ��.
(���� ���� ������ ���������� ��� ��)
*/
//��������
int main() {
	int n;
	int data[10000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = i; j < n; j++) {//i�տ��� �̹� ���ĵȰ��̹Ƿ� i���� ������
			if (data[i] > data[j]) {//���� �տ� �ִ°� �� ũ�� �ٲٱ�
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