#include <stdio.h>

int main() {
    int n,i;
    int first = 0, second = 1, next;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Fibonacci Series " );

    for(i =0; i <n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

