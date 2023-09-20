#include <stdio.h>

int main() {
	int arr1[2][4] =  {{9, 8, 3 , 1}, {4, 3, 8, 2}};
	int arr2[4][3] =  {{5, 3, 2}, {4, 2, 6}, {7, 2, 0}, {6, 1, 9}};
	int product[2][3];
	int r1 = 2, c1 = 4, r2 = 4, c2 = 3;
	int i, j, k, sum = 0;

	printf("The 1st Array : \n");
	for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
	}

	printf("The 2nd Array : \n");
	for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d  ", arr2[i][j]);
        }
        printf("\n");
	}

	for(k=0; k<r1; k++) {
        for(i=0; i<c2; i++) {
            for(j=0; j<c1; j++) {
                sum = ( arr1[k][j] * arr2[j][i] ) + sum ;
            }
            product[k][i] = sum;
            sum = 0;
            }
	}

    printf("Result : \n");
	for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d  ", product[i][j]);
        }
        printf("\n");
	}

	return 0;
}




