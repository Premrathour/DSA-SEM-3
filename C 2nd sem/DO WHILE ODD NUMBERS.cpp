#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d are:\n", n);

    do {
        if(i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    } while(i <= n);

    return 0;
}

