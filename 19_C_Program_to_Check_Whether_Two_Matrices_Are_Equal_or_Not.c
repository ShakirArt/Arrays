#include <stdio.h>

int main()
{
	int arr1[5][3] =  {{5, 3, 7}, {4, 2, 6}, {1, 0, 8}, {9, 8, 3}, {4, 3, 8}};
	int arr2[5][3] =  {{5, 3, 7}, {4, 2, 6}, {1, 0, 8}, {9, 8, 3}, {4, 3, 8}};
	int n = 5, m = 3, i, j, a = 0;
	printf("The 1st Array : \n");
	for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
	}
	printf("The 2nd Array : \n");
	for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", arr2[i][j]);
        }
        printf("\n");
	}

	for(i=0; i<5; i++) {
        for(j=0; j<3; j++) {
            if(arr1[i][j] == arr2[i][j]) {
                a++;
            }
        }
    }
    if(a==(m*n)){
        printf("Matrices are equal.");
    }
    else {
        printf("Matrices are not equal.");
    }

	return 0;
}


