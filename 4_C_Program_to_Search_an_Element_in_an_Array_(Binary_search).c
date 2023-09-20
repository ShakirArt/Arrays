#include <stdio.h>

int main() {
    int n = 7, numb, i, j = 0;
    int arr[7] = {0, 2, 3, 4, 7, 8, 9};
    printf("Array Elements : ");
    for(i=0; i<n; i++)  {
        printf("%d  ", arr[i]);
    }
    printf("\nEnter number : ");
    scanf("%d", &numb);
    for(i=0; i<n; i++) {
        if (numb==arr[i]) {
            printf("Index of the number : %d", i);
            j=1;
            break;
        }
    }
    if(j==0) {
        printf("Not found");
    }
    return 0;
}
