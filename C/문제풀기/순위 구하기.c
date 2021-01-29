#include<stdio.h>

void sort(int score[10001][2],int stu) {
	int count = stu+1;
	for (int i = 1; i <= stu; i++) {
		for (int j = 1; j <= stu; j++) {
			if (score[i][0] >= score[j][0]) {
				count--;
			}
		}score[i][1] = count;
		count = stu+1;
	}
}

int main() {
	int score[10001][2] = { 0,};
	int stu;//ÇÐ»ý¼ö
	scanf("%d", &stu);
	for (int i = 1; i <= stu; i++) {
		scanf("%d", &score[i][0]);
	}
	sort(score,stu);
	
	for (int i = 1; i <= stu; i++) {
		printf("%d %d\n", score[i][0], score[i][1] );
	}
}