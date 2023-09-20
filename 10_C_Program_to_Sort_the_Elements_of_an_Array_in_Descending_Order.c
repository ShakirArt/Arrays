#include <stdio.h>

int main() {
    int n = 7, large, i, j;
    int arr[7];
    printf("Enter 7 numbers : ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("In Descending Order : ");
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] < arr[j] ) {
                large = arr[i];
                arr[i] = arr[j];
                arr[j] = large;
            }
        }
    }
    for(i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }
}



