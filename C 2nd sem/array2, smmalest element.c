//  Wap to find the smalllest element in the array

#include <stdio.h>

int main() {
    int arr[5] = {10, 3, 25, 1, 7};
    int i, smallest;

    smallest = arr[0];   // assume first is smallest

    for(i = 1; i < 5; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Smallest = %d", smallest);

    return 0;
}
