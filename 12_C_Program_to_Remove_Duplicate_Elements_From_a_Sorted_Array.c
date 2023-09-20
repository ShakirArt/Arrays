#include <stdio.h>
int main() {
    int n = 7, i, j, k;
    int arr[7] = {4, 7, 3, 9, 7, 8, 2};
    printf("Numbers : 4  7  3  9  7  8  2  \n");
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i]==arr[j]) {
                for(k=j; k<n-1; k++) {
                    arr[k] = arr[k+1];
                }
            }
        }
    }
    printf("\nWithout duplicate numbers : ");
    for(k=0; k<n; k++) {
        printf("%d  ", arr[k]);
    }
    return 0;
}


