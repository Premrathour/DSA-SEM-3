// WAP  to calcuate sum of first n natural number using recursion

#include<stdio.h>

int sum(int n) 
{
    if (n == 0)          // Base case
        return 0;
    else
        return n + sum(n - 1);   // Recursive call
}

int main() 
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum of first %d natural numbers = %d", n, result);

    return 0;
}
