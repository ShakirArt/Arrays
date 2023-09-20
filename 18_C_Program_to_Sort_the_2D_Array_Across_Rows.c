#include <stdio.h>

int main()
{
	int arr[5][3] =  {{5, 3, 7}, {4, 2, 6}, {1, 0, 8}, {9, 8, 3}, {4, 3, 8}};
	int i, j, a, small;
	for(a=0; a<5; a++) {
        for(i=0; i<3; i++) {
            for(j=0; j<3; j++) {
                if(arr[a][i] < arr[a][j] ) {
                    small = arr[a][i];
                    arr[a][i] = arr[a][j];
                    arr[a][j] = small;
                }
            }
        }
	}
	printf("The Array : \n");
	for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
	}
	return 0;
}


