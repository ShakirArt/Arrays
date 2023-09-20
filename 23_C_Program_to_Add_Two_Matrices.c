#include <stdio.h>

int main()
{
	int arr1[2][4] =  {{9, 8, 3 , 1}, {4, 3, 8, 2}};
	int arr2[2][4] =  {{5, 3, 7, 2}, {4, 2, 6, 1}};
	int sum[2][4];
	int n = 5, m = 3, i, j, a = 0;
	printf("The 1st Array : \n");
	for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
	}
	printf("The 2nd Array : \n");
	for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d  ", arr2[i][j]);
        }
        printf("\n");
	}

	for(i=0; i<2; i++) {
        for(j=0; j<4; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Result : \n");
	for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
	}
	return 0;
}



