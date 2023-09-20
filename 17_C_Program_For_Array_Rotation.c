#include <stdio.h>
int main() {
    int n = 7, numb, i = 0, j;
    int arr[7] = {4, 7, 3, 9, 7, 8, 2};
    printf("Array : 4  7  3  9  7  8  2  \n");
    printf("Rotation : ");
    scanf("%d", &numb);
    int temp[numb];
    j = numb;
    while(j!=0) {
        temp[i] = arr[i];
        //arr[n-j] = arr[i];
        i++;
        j--;
    }
    j = numb;
    for(i=0; i<n-numb; i++) {
        arr[i] = arr[j+i];
    }
    i = 0;
    j = numb;
    while(j!=0) {
        arr[n-j] = temp[i];
        i++;
        j--;
    }
    printf("Array : ");
    for(i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }

}


