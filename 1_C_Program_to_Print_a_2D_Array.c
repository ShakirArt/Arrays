#include <stdio.h>

int main()
{
	int array_2d[5][3] =  {{5, 23, 76}, {45, 3, 7}, {12, 90, 67}, {0, 8, 3}, {4, 35, 82}};
	int i, j;
	for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", array_2d[i][j]);
        }
        printf("\n");
	}
	return 0;
}

