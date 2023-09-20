#include <stdio.h>

int main()
{
	int array_2d[3][3] =  {{5, 3, 7}, {4, 2, 6}, {1, 0, 8}, {9, 8, 3}, {4, 3, 8}};
	int i, j, sum = 0, normal, trace = 0, sqr;
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sqr = array_2d[i][j] * array_2d[i][j];
            sum = sum + sqr;
            if(i==j) {
                trace = array_2d[i][j] + trace;
            }
        }
	}
	normal = sqrt(sum);
	printf("Array : \n");
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", array_2d[i][j]);
        }
        printf("\n");
	}
	printf("Normal : %d\nTrace : %d", normal, trace);
	return 0;
}


