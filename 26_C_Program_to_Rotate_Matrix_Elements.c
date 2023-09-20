#include <stdio.h>

int main()
{
	int arr[5][3] =  {{5, 3, 7}, {4, 2, 6}, {1, 0, 8}, {9, 8, 3}, {4, 3, 8}};
	int i, j, r = 5, c = 3;
	int temp[1][1];

	printf("Array : \n");
	for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
	}
	printf("\n");

	temp[0][0] = arr[0][0];

    for (j = 0; j < r; j++) {
        arr[j][0] = arr[j+1][0];
    }

    for (j = 0; j < c; j++) {
        arr[r-1][j] = arr[r-1][j+1];
    }

    for (j = r-1; j > 0; j--) {
        arr[j][c-1] = arr[j-1][c-1];
    }
    for (j = c-1; j > 0; j--) {
        arr[0][j] = arr[0][j-1];
    }
    arr[0][1] = temp[0][0];
	printf("Result : \n");
	for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
	}

	return 0;
}

