#include <stdio.h>
int main() {
    int n = 7, numb, i, j, k = 0;
    int arr[7];
    printf("Enter 7 numbers : ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Numbers : ");
    for(i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\nChoose a number : ");
    scanf("%d", &numb);
    k = n;
    for(i=0; i<k; i++) {
        if (numb==arr[i]) {
            for(j=i; j<n-1; j++) {
                arr[j] = arr[j+1];
            }
        k--;
        }
    }
    printf("Array : ");
    for(i=0; i<k; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
}

