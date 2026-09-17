#include <stdio.h>

int main() {
    int limit;
    int first = 0, second = 1, next;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Fibonacci Series up to %d:\n", limit);

    while(first <= limit) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

