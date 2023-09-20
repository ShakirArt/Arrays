#include <stdio.h>

int main()
{
	int arr[5][3] =  {{5, 3, 7}, {4, 2, 6}, {1, 0, 8}, {9, 8, 3}, {4, 3, 8}};
	int i, j, r = 5, c = 3;
	int temp[1][3];

	printf("Array : \n");
	for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
	}

    for (j = 0; j < c; j++) {
        temp[0][j] = arr[0][j];
    }

    for (j = 0; j < c; j++) {
        arr[0][j] = arr[r-1][j];
    }

    for (j = 0; j < c; j++) {
        arr[r-1][j] = temp[0][j];
    }

	printf("Result : \n");
	for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
	}

	return 0;
}



