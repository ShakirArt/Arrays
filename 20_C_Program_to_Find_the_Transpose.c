#include <stdio.h>

int main()
{
	int arr[5][3] =  {{5, 3, 7}, {4, 2, 6}, {1, 0, 8}, {9, 8, 3}, {4, 3, 8}};
	int i, j;
	int n = 5, m = 3;
	int trans[m][n];
	printf("Array : \n");
	for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
	}
	for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            trans[i][j] = arr[j][i];
        }
	}
	printf("Transpose : \n");
	for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d  ", trans[i][j]);
        }
        printf("\n");
	}
	return 0;
}


