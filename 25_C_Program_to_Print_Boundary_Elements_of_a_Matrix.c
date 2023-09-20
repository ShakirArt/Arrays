#include <stdio.h>

int main()
{
	int arr[5][3] =  {{5, 3, 7}, {4, 2, 6}, {1, 0, 8}, {9, 8, 3}, {4, 3, 8}};
	int i, j, n = 5, m = 3;
	printf("Array : \n");
	for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
	}
	printf("Result : \n");
	for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            if( (j==0 || j==m-1) || (i==0 || i==n-1) ) {
                printf("%d ", arr[i][j]);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
	}
	return 0;
}


