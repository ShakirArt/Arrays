#include <stdio.h>

int main() {
    int sum = 0, i;
    float n = 7, avg;
    int arr[7];
    printf("Enter numbers : ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum = arr[i] + sum;
    }
    avg = sum/n;
    printf("Sum : %d\n", sum);
    printf("Average : %f", avg);
    return 0;
}

