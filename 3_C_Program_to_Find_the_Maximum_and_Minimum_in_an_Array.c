#include <stdio.h>

int main () {
    int arr[5] = {5, 8, 0, 3, 9};
    int large, min, i;
    printf("Array Elements : ");
    for(i=0; i<5; i++)  {
        printf("%d  ", arr[i]);
    }
    large = arr[0];
    for(i=0; i<5; i++) {
        if(large<arr[i]) {
            large = arr[i];
        }
    }
    min = arr[0];
    for(i=0; i<5; i++) {
        if(min>arr[i]) {
            min = arr[i];
        }
    }
    printf("\nMaximum : %d\nMinimum : %d", large, min);
    return 0;
}

