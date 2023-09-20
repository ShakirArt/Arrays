#include <stdio.h>

int main() {
    int n = 4, m = 6, i, j, x = 0;
    int array3[n];
    int arr1[4], arr2[6];
    printf("Enter numbers for Array1 : ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Array1 : ");
    for(i=0; i<n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\nEnter numbers for Array2 : ");
    for(i=0; i<m; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("Array2 : ");
    for(i=0; i<m; i++) {
        printf("%d  ", arr2[i]);
    }
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++)
        if(arr1[i] == arr2[j]) {
            array3[x] = arr1[i];
            x++;
        }
    }
    printf("\nCommon Elements : ");
    for(i=0; i<x; i++) {
        printf("%d  ", array3[i]);
    }
}

