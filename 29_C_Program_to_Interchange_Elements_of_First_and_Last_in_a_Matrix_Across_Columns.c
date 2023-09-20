#include <stdio.h>

int main()
{
	int arr[5][3] =  {{5, 3, 7}, {4, 2, 6}, {1, 0, 8}, {9, 8, 3}, {4, 3, 8}};
	int i, j, r = 5, c = 3;
	int temp[5][1];

	printf("Array : \n");
	for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
	}

    for (j = 0; j < r; j++) {
        temp[j][0] = arr[j][0];
    }

    for (j = 0; j < r; j++) {
        arr[j][0] = arr[j][c-1];
    }

    for (j = 0; j < r; j++) {
        arr[j][c-1] = temp[j][0];
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
