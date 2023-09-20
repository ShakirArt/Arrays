#include <stdio.h>

int main()
{
	int array_2d[3][3] =  {{5, 3, 7}, {4, 2, 6}, {1, 0, 8}, {9, 8, 3}, {4, 3, 8}};
	int i, j, main = 0, off_d = 0, n = 3, d;
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if(i==j) {
                main = array_2d[i][j] + main;
            }
        }
	}
	d = n - 1;
	for (j = 0; j <= n/2; j++) {
            if(array_2d[j][d-j] == array_2d[d-j][j]) {
                off_d = array_2d[d-j][j] + off_d;
                break;
            }
            off_d = array_2d[j][d-j] + array_2d[d-j][j] + off_d;
        }
	printf("Array : \n");
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", array_2d[i][j]);
        }
        printf("\n");
	}
	printf("Main diagonal elements sum : %d\nOff-diagonal elements sum : %d", main, off_d);
	return 0;
}



