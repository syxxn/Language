#include <stdio.h>

int main() {
	FILE* fp;//������ ����Ű�� ����ü ������
	char ch;
	//fgets(�Է��� �迭, �迭�� ũ��, ���� ������)
	if ((fp = fopen("a.txt", "w")) == NULL) {
		printf("file�� �� �� ������ �߻��Ͽ����ϴ�.");
		return 1;//����������
	}
	while (1) {
		ch=fgetc(stdin);//���Ӻ���� ���� �Է¹ްڴ�
		if (ch == EOF/*������ ��*/) { //������ ���̸� ����
			break;
		}
		fput(ch, fp);//���Ͽ� ch �ֱ�
		
	}
	return 0;// ��������
}