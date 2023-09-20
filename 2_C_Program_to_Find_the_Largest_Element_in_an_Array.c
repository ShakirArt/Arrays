#include <stdio.h>

int main () {
    int arr[5] = {5, 8, 0, 3, 9};
    int large, i;
    large = arr[0];
    for(i=0; i<5; i++)  {
        if(large<arr[i]) {
            large = arr[i];
        }
    }
    printf("%d", large);
    return 0;
}
