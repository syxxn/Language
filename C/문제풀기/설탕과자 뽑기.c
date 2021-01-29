//설탕과자 뽑기

#include <stdio.h>

int main() {
    int h, w, n, l, d, x, y;
    //순서대로 세로,가로, 막대의 개수, 길이, 방향(0가로,1세로),위치 (x,y)
    int c[101][101] = { 0 };//격자판
    scanf("%d %d", &h, &w);//격자판 크기
    scanf("%d", &n);//막대 개수

    for (int i = 1; i <= n; i++) {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if (d == 0) {//가로
            for (int j = 1; j <= l; j++) {//길이
                c[x][y++] = 1;//좌표는(가로,세로)/ 배열은(세로,가로)
            }
        }
        else if (d == 1) {//세로
            for (int j = 1; j <= l; j++) {//길이
                c[x++][y] = 1;
            }
        }
    }

    //좌표는 1부터 시작하는데, 격자판 배열은 0부터 시작하므로
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            printf("%d ", c[i][j]);
        }printf("\n");
    }

}