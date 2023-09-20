#include <stdio.h>

int main() {
    int n = 7, small, i, j;
    int arr[7];
    printf("Enter 7 numbers : ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("In Ascending Order : ");
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] > arr[j] ) {
                small = arr[i];
                arr[i] = arr[j];
                arr[j] = small;
            }
        }
    }
    for(i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }
}




