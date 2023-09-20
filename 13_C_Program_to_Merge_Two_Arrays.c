#include <stdio.h>

int main() {
    int n = 4, m = 6, i, x;
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
    x = m+n;
    int array3[x];
    for(i=0; i<n; i++) {
        array3[i] = arr1[i];
    }
    for(i=0; i<m; i++) {
        array3[i+4] = arr2[i];
    }
    printf("\nArray3 : ");
    for(i=0; i<x; i++) {
        printf("%d  ", array3[i]);
    }
}
