#include<stdio.h>
/*
���������� ������ �ڷ�� ���Ͽ� ������ �ٲ���� ��
���� ��ȯ�ϴ� ���� ����̴�.

������ ���������� ���� ������ �� �ܰ迡�� ��ȯ��
�� �̻� �߻����� ������ ������ ������ ���̴�.
*/
//��������
int main() {
	int n,count=0;//�� �ܰ踦 ��ġ���� ���� count
	int data[1000];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}
	for (int i = n-1; i >=0; i--) {
		int flag = 1;//��ȯ�� ���θ� �˷���
		for (int j = 0; j < i; j++) {//���������� �ڿ������� ä��
			
			if (data[j] > data[j + 1]) {//���������̹Ƿ� �տ� �ڷᰡ �� ũ�� ���� �ڷ�� �ٲٱ�
				int tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
				flag = 0;//��ȯ�� �Ͼ
			}
		}
		if (flag == 1) break;//��ȯ�� �Ͼ�� ����
		else count++;//��ȯ�� �Ͼ���Ƿ� count++
	}
	printf("%d", count);
}